int greenPin=2;
int redPin=3;
int gtime=500;
int rtime=500;
int gBlink=5;
int rBlink=3;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=gBlink;j++)
  {
    digitalWrite(greenPin,HIGH);
    delay(gtime);
    digitalWrite(greenPin,LOW);
    delay(gtime);
  }
for(j=1;j<=rBlink;j++)
  {
    digitalWrite(redPin,HIGH);
    delay(rtime);
    digitalWrite(redPin,LOW);
    delay(rtime);
  }
}
