#include <LCD5110_Basic.h>
LCD5110 ekran(8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

void setup() {

ekran.InitLCD();
ekran.setContrast(70);

 
}

void loop() {




ekran.setFont(SmallFont);
ekran.invertText(1);
ekran.print("MERT",CENTER,0);
ekran.setFont(SmallFont);
ekran.invertText(1);
ekran.print("AHSEN",CENTER,8);
delay(1000);


ekran.clrScr();

ekran.setFont(SmallFont);
ekran.invertText(0);
ekran.print("MERT",CENTER,0);
ekran.setFont(SmallFont);
ekran.invertText(0);
ekran.print("AHSEN",CENTER,8);
delay(1000);


}


/*Bu uygulamada sadece ekranda yazılanlar yanıp sönüyor.*/
