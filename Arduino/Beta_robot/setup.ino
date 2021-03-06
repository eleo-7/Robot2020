void setup() {
  Serial.begin(9600);

  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);
  pinMode(MS1,OUTPUT);
  pinMode(MS2,OUTPUT);
  pinMode(MS3,OUTPUT);

  pinMode(OdDr_B,INPUT_PULLUP);
  pinMode(OdG_B,INPUT_PULLUP);

  digitalWrite(MS1,LOW); //step moteur
  digitalWrite(MS2,LOW);
  digitalWrite(MS3,LOW);

  //attachInterrupt(OdDr_A, Od_dr,RISING);
  attachInterrupt(OdG_A, Od_g,RISING);
  }
