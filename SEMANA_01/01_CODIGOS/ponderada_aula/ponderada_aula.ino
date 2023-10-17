void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    digitalWrite(10,HIGH);
    delay(200);
    digitalWrite(10,LOW);
    delay(200);
  }
  for(int j = 0; j < 3; j++){
    digitalWrite(10,HIGH);
    delay(400);
    digitalWrite(10,LOW);
    delay(400);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(10,HIGH);
    delay(200);
    digitalWrite(10,LOW);
    delay(200);
  }
  delay(500);
}
