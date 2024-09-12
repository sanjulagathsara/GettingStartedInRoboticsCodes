

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,INPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(13);
  Serial.println(state);


  if(state == 1){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }



  delay(10);
}
