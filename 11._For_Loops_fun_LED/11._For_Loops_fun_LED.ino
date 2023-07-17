int redLED =3;
int bright;
int t=20;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(bright = 0; bright <= 255; bright++)
  {
    analogWrite(redLED,bright);
    delay(t);
  }
for(bright = 254; bright >= 1; bright--)
  {
    analogWrite(redLED,bright);
    delay(t);
  }
}
