const int motor1=2,motor2=3;

void setup() {

pinMode(motor1,OUTPUT);  
pinMode(motor2,OUTPUT);
pinMode(A0,INPUT);
  
}

void loop() {

while(analogRead(A0)<=500)
{
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
}

while(analogRead(A0)>500)
{
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,HIGH);
}
}
