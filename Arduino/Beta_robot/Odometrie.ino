void Od_dr(){
  if (digitalRead(OdDr_B) == HIGH){
      OdComptDr--;
  }
  else {
    OdComptDr++;
  }
  Serial.print("Dr :");
  Serial.println(OdComptDr); 
}

void Od_g(){
  if (digitalRead(OdG_B) == HIGH){
      OdComptG--;
  }
  else {
    OdComptG++;
  }
  Serial.print("G :");
  Serial.println(OdComptG); 
}
