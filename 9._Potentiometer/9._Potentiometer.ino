int myVoltPin=A2;
float readVal;
float V2;
int t=500;

void setup() {
  // put your setup code here, to run once:
pinMode(myVoltPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myVoltPin);
V2=(5./1023.)*readVal;
Serial.println(V2);
delay(t);
}
