char gelen_karakter;
const int yesil=2,sari=3,beyaz=4,kirmizi=5;

void setup() {

pinMode(yesil,OUTPUT);  
pinMode(sari,OUTPUT);
pinMode(beyaz,OUTPUT);
pinMode(kirmizi,OUTPUT);
Serial.begin(9600);

}

void loop() {

while(Serial.available()>0) {
  gelen_karakter=Serial.read();

    if(gelen_karakter=='0') {
      digitalWrite(kirmizi,HIGH);
      Serial.println("Kırmızı led yakıldı");
    }

    else if(gelen_karakter=='1') {
      digitalWrite(kirmizi,LOW);
      Serial.println("Kırmızı led söndürüldü");
    }

   else if(gelen_karakter=='2') {
      digitalWrite(beyaz,HIGH);
      Serial.println("beyaz led yakıldı");
    }

    else if(gelen_karakter=='3') {
      digitalWrite(beyaz,LOW);
      Serial.println("Beyaz led söndürüldü");
    }

    else if(gelen_karakter=='4') {
      digitalWrite(sari,HIGH);
      Serial.println("Sarı led yakıldı");
    }

    else if(gelen_karakter=='5') {
      digitalWrite(sari,LOW);
      Serial.println("Sari led söndürüldü");
    }

    else if(gelen_karakter=='6') {
      digitalWrite(yesil,HIGH);
      Serial.println("Yeşil led yakıldı");
    }

    else if(gelen_karakter=='7') {
      digitalWrite(yesil,LOW);
      Serial.println("Yeşil led söndürüldü");
    }
}

}
