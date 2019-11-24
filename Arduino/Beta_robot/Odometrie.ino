void Od_dr(){
  if (digitalRead(OdDr_B) == HIGH){
      OdComptDr--;
  }
  else {
    OdComptDr++;
  }
  //Serial.println(OdComptDr);
}
