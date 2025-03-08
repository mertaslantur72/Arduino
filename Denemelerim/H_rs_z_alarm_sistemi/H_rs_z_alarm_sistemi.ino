const int yesil=3;
const int kirmizi=4;
const int pir_sensor=2;
const int buzzer=10;
const int dugme1=11,dugme2=12;
bool alarm=false;

void setup() {

pinMode(yesil,OUTPUT);  
pinMode(kirmizi,OUTPUT); 
pinMode(buzzer,OUTPUT); 
pinMode(dugme1,INPUT); 
pinMode(dugme2,INPUT); 
pinMode(pir_sensor,INPUT); 
Serial.begin(9600);

}

void loop() {

if(digitalRead(dugme1)==HIGH)
{
  alarm=true;
  delay(5000);
}

if(digitalRead(dugme2)==HIGH)
{
alarm=false;  
}

Serial.print("ALARM:");
Serial.println(alarm);

if(alarm==true)
{
  digitalWrite(yesil,HIGH);
  digitalWrite(kirmizi,LOW);

  if(digitalRead(pir_sensor)==HIGH)
  {
    while(digitalRead(dugme2)==LOW)
    {
      digitalWrite(buzzer,HIGH);
      delay(50);
      digitalWrite(buzzer,LOW);
      delay(50);
    }
  }
}

else
{
  digitalWrite(yesil,LOW);
  digitalWrite(kirmizi,HIGH);
}

}
