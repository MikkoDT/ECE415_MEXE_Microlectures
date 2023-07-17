#include <DHT.h>
#define Type DHT11 //Constant
int DHpin=2;
DHT HT(DHpin,Type);
float humidity;
float tempC;
float tempF;
int t=500;
int dt=5000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(" Temperature C: ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(" Temperature F: ");
Serial.print(tempF);
Serial.println(" F ");
delay(dt);
}
