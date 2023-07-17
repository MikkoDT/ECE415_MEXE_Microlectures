int butOne=3,butTwo=5;
int redLED=6;
int butVal1, butVal2;
int t=250;
int bright;
int V1,V2;

void setup() {
  // put your setup code here, to run once:
pinMode(butOne,INPUT);
pinMode(butTwo,INPUT);
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
butVal1=digitalRead(butOne);
butVal2=digitalRead(butTwo);

if(butVal1==0)
{
  bright=bright+5;
  V1=bright;
}
if(butVal2==0)
{
  bright=bright-5;
  V2=bright;
}
if(bright>255)
{
  bright=255;
}
if(bright<0)
{
  bright=0;
}
analogWrite(redLED,bright);

Serial.print("Button 1 = ");
Serial.print(butVal1);
Serial.print(", Button 2 = ");
Serial.println(butVal2);
Serial.print("V1 = ");
Serial.print(V1);
Serial.print(", V2 = ");
Serial.println(V2);
Serial.println();
delay(t);
}
