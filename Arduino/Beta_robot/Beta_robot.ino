String Data = "";
bool Donnees_dispo = false;

void setup() {
  Serial.begin(9600);
  }

void loop() {
  if (Donnees_dispo){
    Donnees_dispo = false;
    if (Data.startsWith("moteur")){
      if (Data.substring(7).startsWith("ttd")){
        Serial.println("fine");
      }
    }
  }
}


void serialEvent() {
  Data = Serial.readStringUntil(char(';'));
  Donnees_dispo=true;
  //Serial.println(Data);
}
