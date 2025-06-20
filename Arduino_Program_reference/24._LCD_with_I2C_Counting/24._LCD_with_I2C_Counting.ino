#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int t=500;
int j;

void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Let's count!");
for(j=1;j<=10;j++)
{
  lcd.setCursor(0,1);
  lcd.print(j);
  delay(t);
}
  lcd.clear();
}
