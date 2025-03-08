#include <LCD5110_Basic.h>
//LCD5110 nesne_adi(clk,Din,DC,RST,CE); 
LCD5110 ekran(8,9,10,11,12);

extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];


void setup() {

ekran.InitLCD();
ekran.setContrast(70); //0-127 arası kontrast değeri girilir.
ekran.setFont(SmallFont);

  

}

void loop() {

/*
ekran.setFont(SmallFont);
ekran.print("Asude",CENTER,8);

ekran.setFont(SmallFont);
ekran.print("Aslanturk",CENTER,16);

ekran.setFont(SmallFont);
ekran.print("akilli",CENTER,24);

*/

/*
ekran.setFont(MediumNumbers);
ekran.printNumI(1453,CENTER,16);
*/

/*
ekran.setFont(SmallFont);
ekran.printNumF(11.25,2,CENTER,0); // Basamak sayısı olan 2
yerine max 5e kadar yazabiliriz
*/

/*
ekran.setFont(SmallFont);
ekran.printNumF(11.25,2,CENTER,0,',',7,'_');
*/

ekran.setFont(SmallFont);
ekran.printNumF(-10.5,2,CENTER,0,',',7,'_');






}
