int potPin=A2;
int gPin=3;
float potVal;
float LEDVal;
int t=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(gPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
LEDVal=(255./1023.)*potVal;
analogWrite(gPin,LEDVal);
Serial.println(LEDVal);
delay(t);
}
