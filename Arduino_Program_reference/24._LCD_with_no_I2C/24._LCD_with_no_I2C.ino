#include <LiquidCrystal.h>
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int t=3000;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
lcd.print("Hello, world!");
delay(t);
lcd.clear();

lcd.setCursor(0,0);
lcd.print("I am Engr");
lcd.setCursor(0,1);
lcd.print("Mikko De Torres");
delay(t);
lcd.clear();
}
