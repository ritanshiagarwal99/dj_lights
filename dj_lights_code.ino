#define led1 3            //initialising LEDs
#define led2 4
#define led3 5
#define led4 6
#define led5 7
#define led6 8
int sensorPin=A0;            //initialise Big Sound Sensor Pin
void setup() {
  // put your setup code here, to run once:
pinMode(sensorPin, INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
Serial.begin(9600);       //setting baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor=analogRead(sensorPin);
Serial.println(sensor);
if(sensor>=445)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
}
