

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  Serial.println("Led is ON");
  delay(1000);
  digitalWrite(13,LOW);
  Serial.println("Led is OFF");
  delay(1000);
}
