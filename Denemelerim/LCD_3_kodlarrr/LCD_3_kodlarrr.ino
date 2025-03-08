#include <LCD5110_Basic.h>
LCD5110 ekran(8,9,10,11,12);

extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

void setup() {

ekran.InitLCD();
ekran.setContrast(70);
ekran.setFont(SmallFont);
ekran.print("SAYILAR:",LEFT,0);  

}

void loop() {

for(int i=1;i<=30;i++) {

  String ifade=String(i);
  ekran.print(ifade,50,0);
  delay(500);
  ekran.clrRow(0,50,80);
}

/* Burada ekrana sayıları yazdırmayı ve clrrow komutu ile 
 *  iz kalmasını engelledik hadi bbb
 */


















  

}
