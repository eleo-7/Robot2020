void Tout_droit(int Nb_pas,bool sens){
  int delai = 6000;
  Serial.println("avance tout droit");
  Serial.println(Nb_pas);
  Serial.println(sens);
  
  digitalWrite(dirPin,sens); 
  digitalWrite(dirPin2,not sens);

  for(int x = 0; x<= Nb_pas; x++){
    digitalWrite(stepPin,HIGH); 
    digitalWrite(stepPin2,HIGH);
    delayMicroseconds(delai); 
    digitalWrite(stepPin,LOW);
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(delai); 
    Serial.println(x);
  }
  
}

void Tourner(int Nb_pas,bool sens){
  int delai = 10000;
  Serial.println("Tourne");
  Serial.println(Nb_pas);
  Serial.println(sens);
  
  digitalWrite(dirPin,not sens); 
  digitalWrite(dirPin2,not sens);

  for(int x = 0; x<= Nb_pas; x++){
    digitalWrite(stepPin,HIGH); 
    digitalWrite(stepPin2,HIGH);
    delayMicroseconds(delai); 
    digitalWrite(stepPin,LOW);
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(delai); 
    Serial.println(x);
  }
}

void Moteur_g (int Nb_pas,bool sens, int vitesse = 0){
int delai = 6000;
 /* Serial.println("avance tout droit");
  Serial.println(Nb_pas);
  Serial.println(sens);
  */
  digitalWrite(dirPin,sens); 
  
  for(int x = 0; x<= Nb_pas; x++){
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(delai); 
    digitalWrite(stepPin,LOW);
    delayMicroseconds(delai); 
  //  Serial.println(x);
  }
  
}

int Avance(int g,int d,int v){//cm,cm,m/s?
  bool sens_g = g>0;
  float etape = 0.1*g;
  while(g>0){
    int pas = cm_to_step(etape);
    Moteur_g(pas,sens_g);
    Serial.println(comp_tick_step(OdComptG,pas));
  }
  
}

int cm_to_step(int cm){
  int nb_pas = int((nb_pas_1_tour/perimetre_roue)*cm);
  return (nb_pas);
}

float comp_tick_step(int tick, int pas){
  float cm_pas = pas*(perimetre_roue/nb_pas_1_tour);
  float cm_tick = tick*(circonference_codeuse/nbre_ticks_par_tour);
  return(cm_tick-cm_pas);
}
