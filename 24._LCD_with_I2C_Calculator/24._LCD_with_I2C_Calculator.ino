#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int t=500;

float firstNum;
float secNum;
float answer;

String op;

void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Input 1st Number");
while(Serial.available()==0)
{
  
}
firstNum=Serial.parseFloat();
lcd.clear();
  
lcd.setCursor(0,0);
lcd.print("Input 2nd Number");
while(Serial.available()==0)
{
  
}
secNum=Serial.parseFloat();
lcd.clear();
  
lcd.setCursor(0,0);
lcd.print("Input Operator");
lcd.setCursor(0,1);
lcd.print("+,-,*,/");
while(Serial.available()==0)
{
  
}
op=Serial.readString();

  
if (op=="+")
{
  answer=firstNum+secNum;
}
if (op=="-")
{
  answer=firstNum-secNum;
}
if (op=="*")
{
  answer=firstNum*secNum;
}
if (op=="/")
{
  answer=firstNum/secNum;
}
lcd.clear();
lcd.setCursor(0,0);
lcd.print(firstNum);
lcd.print(op);
lcd.print(secNum);
lcd.print("=");
lcd.print(answer);
  

lcd.setCursor(0,1);
lcd.print("Ok? Y");
while(Serial.available()==0)
{
  
}
Serial.readString();
lcd.clear();
}
