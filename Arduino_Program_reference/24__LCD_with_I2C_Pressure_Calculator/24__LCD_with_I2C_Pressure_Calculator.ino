#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int t=1500;
int t0=10000;
int t1=5000;


float P;         // pressure
float r;         // radius
float m;         // mass
float F;         // force
float A;         // Area

double  ans1;
double  ans2;
String choice1;//decide whether convert or not
String choice2;//decide whether 'Barr' or 'lb/in^2'

String msg0="Kindly input m= ";
String msg1="Kindly input r= ";
void setup()
{
lcd.begin(16,2);
lcd.backlight();
lcd.init();
Serial.begin(9600);
}

void loop()
{
 lcd.setCursor(3,0);
 lcd.print("Greetings!!!");
 delay(t);
 lcd.clear();
 lcd.setCursor(2,0);
 lcd.print("Kindly Input");
 lcd.setCursor(1,1);
 lcd.print("Values Needed");
 delay(t);
 lcd.clear();
 

 //Inputting the necessary mass values
  lcd.setCursor(0,0);
  lcd.print("Pressure Calcu");
  lcd.setCursor(0,1);
  lcd.print("m= ");
  Serial.print(msg0);
  while(Serial.available()==0);
  {
  }
  m=Serial.parseFloat();
  Serial.print(m);
  Serial.println();
  lcd.clear();
  
 //Inputting the necessary radius values
  lcd.setCursor(0,0);
  lcd.print("Pressure Calcu");
  lcd.setCursor(0,1);
  lcd.print("r= ");
  Serial.print(msg1);
  while(Serial.available()==0);
  {
  }
  r=Serial.parseFloat();
  Serial.print(r);
  lcd.clear();
  
 //Computation Part
  F= m*9.81;
  Serial.println();
  Serial.print("F= ");
  Serial.print(F);
  Serial.print(" N "); //Newton
  
 
  A= (3.1416)*(r*r);
  Serial.println();
  Serial.print("A= ");
  Serial.print(A);
  Serial.print(" su"); //square unit
  
  
  P=F/A;
  
  
  lcd.setCursor(0,0);
  lcd.print("P= ");
  lcd.print(P);
  lcd.print("Pa");
  Serial.println();
  Serial.print("P= ");
  Serial.print(P);
  Serial.print("Pa");
  Serial.println();
  
  
  lcd.setCursor(0,1);
  lcd.print("Convert or Not?");
  while(Serial.available()==0);
  {
  }
  choice1=Serial.readString();
  
  if(choice1=="Convert" || choice1=="CONVERT" || choice1=="convert")
  {
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Convert");
   Serial.print("Convert");
   delay(t);
   lcd.clear();
   
   lcd.setCursor(0,0);
   lcd.print("What do u want?");
   lcd.setCursor(0,1);
   lcd.print("Bar or lbf/in^2");
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Bar or lbf/in^2");
   lcd.setCursor(0,1);
   lcd.print("B or L");
   while(Serial.available()==0);
     {
     }
  choice2=Serial.readString();
    if(choice2=="B")
      {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("You choose Bar ");
    delay(t);
    Serial.println("You choose Bar ");
      
    
      //converting Pa to Bar
    ans1=(P*0.00001); 
    lcd.clear(); 
    lcd.setCursor(0,0);
    lcd.print("Barr= ");
    lcd.setCursor(0,1);  
    lcd.print(ans1,7);
    lcd.print("Barr");
    delay(t0);
    lcd.clear();
    return;
      }   
    else(choice2=="L");
       {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("U choose lb/in^2 ");
    delay(t);
    Serial.println("You choose lbf/in^2 ");
       
       //converting Pa to lbf/in^2
    ans2= (P*0.00014503773800722);
    lcd.clear();  
    lcd.setCursor(0,1);
    lcd.print(" = "); 
    lcd.print(ans2,9);
    lcd.setCursor(0,0);    
    lcd.print("lbf/in^2 ");  
    delay(t0);
    lcd.clear();
    return;
       }  
  }
  
  // if the input characters are not word convert or not, the system will be terminated
    
  else (choice1!="CONVERT" || choice1!="convert"|| choice1!="Convert" ||choice1!="Not");
     {
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("P= ");
   lcd.setCursor(0,1); 
   lcd.print(P);
   lcd.print(" pa ");
   delay(t1);
   lcd.clear();
   return;
     }
  
  
  if(choice1=="Not");
     {
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("P= ");
   lcd.print(P);
   lcd.print("Pa");
   delay(t0);
   lcd.clear();
   return;
     }

}
