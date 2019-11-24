/************************************************************
 ***********Variables*************************************
 **********************************************************/

//Reception et traitement du Serail 
String Data = "";
bool Donnees_dispo = false;
char recep_mot[] = "fonction;50;true";
String cmds[2];

//Steppers
const int stepPin = 10; 
const int dirPin = 4;
const int stepPin2 = 5; 
const int dirPin2 = 6; 
int MS1 = 7;
int MS2 = 8;
int MS3 = 9;

//Odometres
const int OdDr_A = 0;//pin numero 2
const int OdDr_B = 10;

long OdComptDr = 0;

void Od_dr();
