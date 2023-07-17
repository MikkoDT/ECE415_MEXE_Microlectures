int readPin=A2;
int readVal;
int t=250;

void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readPin);
Serial.println(readVal);
delay(t);
}
