int butPin=3;
int butVal;
int t=500;

void setup() {
  // put your setup code here, to run once:
pinMode(butPin,INPUT);
digitalWrite(butPin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
butVal=digitalRead(butPin);
Serial.print("Your Button is: ");
Serial.println(butVal);
delay(t);
}
