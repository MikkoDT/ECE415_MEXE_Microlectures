#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#include <DHT.h>
#define Type DHT11 //Constant
int DHpin=2;
DHT HT(DHpin,Type);
float humidity;
float tempC;
float tempF;
int dt=2000;

LiquidCrystal_I2C lcd(0x27,16,2);
int t=2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(" Temperature C: ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(" Temperature F: ");
Serial.print(tempF);
Serial.println(" F ");


lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);

lcd.setCursor(0,1);
lcd.print("Temp C: ");
lcd.print(tempC);

delay(t);
}
