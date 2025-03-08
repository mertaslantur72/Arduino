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

ekran.clrScr();
ekran.setFont(SmallFont);
ekran.print("Seni",LEFT,0);
delay(1000);

ekran.clrScr();
ekran.print("cok",20,0);
delay(1000);

ekran.clrScr();
ekran.print("sev",40,0);
delay(1000);

ekran.clrScr();
ekran.print("iyom",60,0);
delay(1000);

  
}
