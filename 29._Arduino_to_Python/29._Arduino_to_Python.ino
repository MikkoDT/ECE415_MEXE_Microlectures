int cnt=1;
int t=1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(cnt);
Serial.println("Momo");
cnt=cnt+1;
delay(t);
}
