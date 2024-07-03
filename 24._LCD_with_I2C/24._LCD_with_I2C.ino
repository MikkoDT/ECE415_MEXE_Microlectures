#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int t=5000;

void setup() {
  // put your setup code here, to run once:
lcd.init();
//lcd.begin();
//lcd.backlight(HIGH);
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
