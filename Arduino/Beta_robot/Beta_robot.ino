String Data = "";
bool Donnees_dispo = false;
char recep_mot[] = "fonction;50;true";

void setup() {
  Serial.begin(9600);
  }

void loop() {
  if (Donnees_dispo){
    Donnees_dispo = false;
    if (Data.startsWith("moteur")){
      Data = Data.substring(7);
      char buf[sizeof(recep_mot)];
      Data.toCharArray(buf,sizeof(buf));
      char *p = buf;
      char *str;
      int place = 0;
      while((str = strtok_r(p,";",&p)) != NULL){
        Serial.println(str);
        place ++;
      }
    }
  }
}


void serialEvent() {
  Data = Serial.readStringUntil(char('//'));
  Donnees_dispo=true;
  Serial.println(Data);
}
