char data = ' ';
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  if(Serial.available() > 0)
  data = Serial.read();
  Serial.println(data);
  if(data == 'n')
  digitalWrite(13, HIGH);
  else if(data == 'f')
  digitalWrite(13, LOW);

 /* while(Serial.available())
  Serial.read();
  */
}
