int xPin=A1;
int yPin=A3;
int swPin=2;
int xVal;
int yVal;
int swVal;
int t=1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
pinMode(swPin,INPUT);
digitalWrite(swPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal=analogRead(xPin);
yVal=analogRead(yPin);
swVal=digitalRead(swPin);
Serial.print("X Value = ");
Serial.print(xVal);
Serial.print(", Y Value = ");
Serial.print(yVal);
Serial.print(", Switch State is ");
Serial.println(swVal);
Serial.println();
delay(t);
}
