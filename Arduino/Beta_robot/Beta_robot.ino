String Data = "";

void setup() {
  Serial.begin(9600);
  }

void loop() {
  
}


void serialEvent() {
  Data = Serial.readStringUntil(char(';'));
  Serial.println(Data);
}
