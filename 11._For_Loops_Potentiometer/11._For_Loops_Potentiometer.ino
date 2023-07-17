#define potPin A0
int potValue;
int redLED = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potValue = analogRead(potPin);
  
Serial.println(potValue);
delay(50);

for(int brightness = potValue; brightness <= potValue; brightness++)
  {
    analogWrite(redLED,brightness);
    delay(20);
  }
for(int brightness = potValue; brightness >= potValue; brightness--)
  {
    analogWrite(redLED,brightness);
    delay(20);
  }
}
