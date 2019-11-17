/************************************************************
 ***********Variables*************************************
 **********************************************************/

//Reception et traitement du Serail 
String Data = "";
bool Donnees_dispo = false;
char recep_mot[] = "fonction;50;true";
String cmds[2];

/************************************************************
 ***********Connectiques*************************************
 **********************************************************/
//Steppers
const int stepPin = 3; 
const int dirPin = 4;
const int stepPin2 = 5; 
const int dirPin2 = 6;
int delai = 1000; 
int MS1 = 7;
int MS2 = 8;
int MS3 = 9;
