int tiltPin=2;
int tiltVal;
int t=500;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
delay(t);
}
