int redLED=4; // 1sec on and 1 sec off
int blueLED=3; // .25sec on and .25 sec off
int greenLED=2; // 7sec on and 7sec off
unsigned long fromStartms; // millis from start

// red LED Variables
unsigned long prevredLEDms; // millis of redLED previous read
unsigned long redLED_interval=1000;
int redLEDstate;

// blue LED Variables
unsigned long prevblueLEDms; // millis of blueLED previous read
unsigned long blueLED_interval=250;
int blueLEDstate;

// green LED Variables
unsigned long prevgreenLEDms; // millis of greenLED previous read
unsigned long greenLED_interval=2000;
int greenLEDstate;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
pinMode(greenLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
fromStartms=millis();
if(fromStartms - prevredLEDms > redLED_interval)
{
  prevredLEDms = fromStartms;
  if(redLEDstate==0)
  {
    redLEDstate=1;
    digitalWrite(redLED,redLEDstate);
  }
  else
  {
    redLEDstate=0;
    digitalWrite(redLED,redLEDstate);
  }
}
if(fromStartms - prevblueLEDms > blueLED_interval)
{
  prevblueLEDms = fromStartms;
  if(blueLEDstate==0)
  {
    blueLEDstate=1;
    digitalWrite(blueLED,blueLEDstate);
  }
  else
  {
    blueLEDstate=0;
    digitalWrite(blueLED,blueLEDstate);
  }
}
if(fromStartms - prevgreenLEDms > greenLED_interval)
{
  prevgreenLEDms = fromStartms;
  if(greenLEDstate==0)
  {
    greenLEDstate=1;
    digitalWrite(greenLED,greenLEDstate);
  }
  else
  {
    greenLEDstate=0;
    digitalWrite(greenLED,greenLEDstate);
  }
}
}
