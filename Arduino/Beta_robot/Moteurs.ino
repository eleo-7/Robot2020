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
