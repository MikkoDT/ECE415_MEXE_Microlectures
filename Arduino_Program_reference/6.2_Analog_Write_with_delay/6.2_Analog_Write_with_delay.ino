int pin2=3,pin3=5,pin4=6,pin5=9;
int t0=1000;
float V1,V2,V3,V4;
float bright0=0;
float bright1=63.75;
float bright2=127.50;
float bright3=191.25;
float bright4=255.0;

void setup() {
  // put your setup code here, to run once:
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// 25%
V1=(5./255.)*bright1;
Serial.print("V1 = ");
Serial.println(V1);
analogWrite(pin2,bright1);
delay(t0);

// 50%
V2=(5./255.)*bright2;
Serial.print("V2 = ");
Serial.println(V2);
analogWrite(pin3,bright2);
delay(t0);

// 75%
V3=(5./255.)*bright3;
Serial.print("V3 = ");
Serial.println(V3);
analogWrite(pin4,bright3);
delay(t0);

// 100%
V4=(5./255.)*bright4;
Serial.print("V4 = ");
Serial.println(V4);
analogWrite(pin5,bright4);
delay(t0);

analogWrite(pin2,bright0);
analogWrite(pin3,bright0);
analogWrite(pin5,bright0);
analogWrite(pin4,bright0);
delay(t0);
  }
