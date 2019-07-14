#define pin 13

void setup() {
  Serial.begin(9600);

}

void loop() {
  while(Serial.available() > 0)
  {
    char data = Serial.read();
    if(data == 'f')
      digitalWrite(pin, LOW);

    else if(data == 'n')
       digitalWrite(pin, HIGH);
  }

}
