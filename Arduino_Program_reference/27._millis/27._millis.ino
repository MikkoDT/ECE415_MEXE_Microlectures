

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Introduction t0 millis");
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(millis());
}
