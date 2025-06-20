int redLED=3,greenLED=5,blueLED=6;
String myColor;
String msg1="What color do you want?";
String msg2="My color is ";

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(blueLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0)
{
  
}
myColor=Serial.readString();
Serial.print(msg2);
Serial.println(myColor);
Serial.println();
if(myColor=="red" || myColor=="pula")
{
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
}
else if(myColor=="blue" || myColor=="asul")
{
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
}
else if(myColor=="green" || myColor=="berde")
{
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
}
else if(myColor=="none" || myColor=="wala")
{
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
}
else if(myColor=="purple" || myColor=="lila")
{
  analogWrite(redLED,80);
  analogWrite(blueLED,255);
  digitalWrite(greenLED,LOW);
}
else if(myColor=="aqua")
{
  digitalWrite(redLED,LOW);
  analogWrite(blueLED,80);
  analogWrite(greenLED,255);
}
else if(myColor=="yellow")
{
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,155);
}
else if(myColor=="cyan")
{
  analogWrite(redLED,0);
  analogWrite(blueLED,255);
  analogWrite(greenLED,255);
}
else if(myColor=="magenta")
{
  analogWrite(redLED,255);
  analogWrite(blueLED,100);
  analogWrite(greenLED,0);
}
else if(myColor=="orange")
{
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,50);
}
else
{
  Serial.println("Warning! Color is not available.");
  Serial.println();
}
}
