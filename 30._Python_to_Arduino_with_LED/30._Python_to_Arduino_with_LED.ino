int redLED=3,greenLED=5,blueLED=6;
int redVal=255,greenVal=255,blueVal=255;
String cmd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0)
{
  
}
cmd=Serial.readStringUntil('\r');
if(cmd=="red")
{
analogWrite(redLED,redVal);
analogWrite(greenLED,0);
analogWrite(blueLED,0);
}
if(cmd=="blue")
{
analogWrite(redLED,0);
analogWrite(greenLED,0);
analogWrite(blueLED,blueVal);
}
if(cmd=="green")
{
analogWrite(redLED,0);
analogWrite(greenLED,greenVal);
analogWrite(blueLED,0);
}
if(cmd=="yellow")
{
analogWrite(redLED,redVal);
analogWrite(greenLED,greenVal);
analogWrite(blueLED,0);
}
if(cmd=="fuchsia pink")
{
analogWrite(redLED,redVal);
analogWrite(greenLED,0);
analogWrite(blueLED,100);
}
if(cmd=="off")
{
analogWrite(redLED,0);
analogWrite(greenLED,0);
analogWrite(blueLED,0);
}

}
