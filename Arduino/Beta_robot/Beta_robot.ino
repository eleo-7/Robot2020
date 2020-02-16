/************************************************************
 ***********Variables*************************************
 **********************************************************/
// 
int nbre_ticks_par_tour=400;  // résolution de la roue codeuse
float circonference_codeuse=19.949;  // circonférence en cm

float perimetre_roue = 21.3471220811; //cm
int nb_pas_1_tour = 1*200;

//Reception et traitement du Serial 
String Data = "";
bool Donnees_dispo = false;
char recep_mot[] = "fonction;50;true";
String cmds[2];

//Steppers
const int stepPin = 10; //gauche
const int dirPin = 4;
const int stepPin2 = 5; //droite
const int dirPin2 = 6; 
int MS1 = 7;
int MS2 = 8;
int MS3 = 9;

//Odometres
const int OdDr_A = digitalPinToInterrupt(2);
const int OdDr_B = 11;

long OdComptDr = 0;

const int OdG_A = digitalPinToInterrupt(3);
const int OdG_B = 12;

long OdComptG = 0;

//void Od_dr();
