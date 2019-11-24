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
        cmds[place]=str;
        place ++;
      }
      if (cmds[0]=="ttd"){
        Tout_droit(cmds[1].toInt(),cmds[2]=="True");
      }
      else if (cmds[0]=="rot"){
        Tourner(cmds[1].toInt(),cmds[2]=="Left");
      }
    }
  }
  //Serial.println(OdComptDr);
}
