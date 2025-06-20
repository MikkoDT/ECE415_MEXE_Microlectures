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
redVal=Serial.readStringUntil(':').toInt();
greenVal=Serial.readStringUntil(':').toInt();
blueVal=Serial.readStringUntil('\r').toInt();

analogWrite(redLED,redVal);
analogWrite(greenLED,greenVal);
analogWrite(blueLED,blueVal);
}
