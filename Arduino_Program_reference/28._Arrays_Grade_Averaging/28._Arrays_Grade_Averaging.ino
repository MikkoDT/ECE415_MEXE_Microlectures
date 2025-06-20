float grades[25];
int numGrades;
float ave;
int i;
float sumGrades;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("How Many Grades? ");
while(Serial.available()==0)
{
  
}
numGrades=Serial.parseInt();
for(i=0;i<numGrades;i++)
{
  Serial.println("Please Input Your Grade: ");
  while(Serial.available()==0)
  {
    
  }
  grades[i]=Serial.parseFloat();
}
for(i=0;i<numGrades;i++)
{
  sumGrades=sumGrades+grades[i];
}
ave=sumGrades/numGrades;
Serial.print("Your Average is ");
Serial.println(ave);
Serial.println("");
sumGrades=0;
}
