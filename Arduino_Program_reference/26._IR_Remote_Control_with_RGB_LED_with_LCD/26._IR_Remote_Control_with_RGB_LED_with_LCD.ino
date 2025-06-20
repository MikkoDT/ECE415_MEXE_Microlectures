#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int IRpin=10;
IRrecv IR(IRpin);
int t=1500;

int redLED=3,greenLED=5,blueLED=6;
int t2=500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(blueLED,OUTPUT);
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("I am Engr");
lcd.setCursor(0,1);
lcd.print("Mikko De Torres");

while(IR.decode())
{
 //Serial.println(IR.decodedIRData.decodedRawData,HEX);
 if(IR.decodedIRData.decodedRawData == 0xE916FF00)
 {
  Serial.println(0);
  analogWrite(redLED,255);
  analogWrite(blueLED,255);
  analogWrite(greenLED,255);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("White");
  delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xF30CFF00)
 {
  Serial.println(1);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Red");
  delay(t2);
  lcd.clear();
 }
  if(IR.decodedIRData.decodedRawData == 0xE718FF00)
 {
  Serial.println(2);
  analogWrite(redLED,0);
  analogWrite(blueLED,255);
  analogWrite(greenLED,0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Blue");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xA15EFF00)
 {
  Serial.println(3);
  analogWrite(redLED,0);
  analogWrite(blueLED,0);
  analogWrite(greenLED,255);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Green");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xF708FF00)
 {
  Serial.println(4);
  analogWrite(redLED,255);
  analogWrite(blueLED,255);
  analogWrite(greenLED,0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Violet");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xE31CFF00)
 {
  Serial.println(5);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,255);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Yellow");
    delay(t2);
  lcd.clear();
 }
  if(IR.decodedIRData.decodedRawData == 0xA55AFF00)
 {
  Serial.println(6);
  analogWrite(redLED,0);
  analogWrite(blueLED,255);
  analogWrite(greenLED,255);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Cyan");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xBD42FF00)
 {
  Serial.println(7);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,50);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Orange");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xAD52FF00)
 {
  Serial.println(8);
  analogWrite(redLED,255);
  analogWrite(blueLED,100);
  analogWrite(greenLED,0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Fuchsia Pink");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xB54AFF00)
 {
  Serial.println(9);
  analogWrite(redLED,0);
  analogWrite(blueLED,80);
  analogWrite(greenLED,255);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("Aqua");
    delay(t2);
  lcd.clear();
 }
 if(IR.decodedIRData.decodedRawData == 0xBC43FF00)
 {
  Serial.println("Play/Pause");
  analogWrite(redLED,0);
  analogWrite(blueLED,0);
  analogWrite(greenLED,0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("RGB LED Color:");
  lcd.setCursor(0,1);
  lcd.print("LED Off");
    delay(t2);
  lcd.clear();
 }
  if(IR.decodedIRData.decodedRawData == 0xE619FF00)
 {
  Serial.println(".");
 }
  if(IR.decodedIRData.decodedRawData == 0xEA15FF00)
 {
  Serial.println("v+");
 }
  if(IR.decodedIRData.decodedRawData == 0xF807FF00)
 {
  Serial.println("v-");
 }
  if(IR.decodedIRData.decodedRawData == 0xBF40FF00)
 {
  Serial.println("Next");
 }
  if(IR.decodedIRData.decodedRawData == 0xBB44FF00)
 {
  Serial.println("Prev");
 }
  if(IR.decodedIRData.decodedRawData == 0xB946FF00)
 {
  Serial.println("CH");
 }
  if(IR.decodedIRData.decodedRawData == 0xB847FF00)
 {
  Serial.println("CH+");
 }
  if(IR.decodedIRData.decodedRawData == 0xBA45FF00)
 {
  Serial.println("CH-");
 }
  if(IR.decodedIRData.decodedRawData == 0xF609FF00)
 {
  Serial.println("EQ");
 }
 delay(t);
 IR.resume();
}

}
