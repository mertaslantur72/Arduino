int kirmizi=3;
int sari=4;
int yesil=5;
int solbacak=1;
int sagbacak=2;

void setup() {
pinMode(solbacak,INPUT);
pinMode(sagbacak,INPUT); 
pinMode(kirmizi,OUTPUT); 
pinMode(sari,OUTPUT); 
pinMode(yesil,OUTPUT);   

}

void loop() {
 if(digitalRead(solbacak)==HIGH)
 {
  digitalRead(kirmizi,HIGH);
  digitalRead(sari,HIGH);
  digitalRead(yesil,HIGH); 
 }
else
{
  digitalRead(kirmizi,HIGH);
  digitalRead(sari,HIGH);
  digitalRead(yesil,HIGH);
  delay(100);
  digitalRead(kirmizi,LOW);
  digitalRead(sari,LOW);
  digitalRead(yesil,LOW);
  delay(100);
}
}
