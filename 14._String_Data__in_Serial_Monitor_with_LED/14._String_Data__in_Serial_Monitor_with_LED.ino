String myColor;
String msg1="Hello! What color do you want?";
String msg2="My color is ";
int redLED=2,blueLED=3,greenLED=4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
pinMode(greenLED,OUTPUT);
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
else
{
  Serial.println("Warning! Color is not available.");
  Serial.println();
}
}
