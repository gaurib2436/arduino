// C++ code
//
int motor=13;
int sensor=2;
int sensorstate=0;
void setup() {
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
  pinMode(sensor,INPUT);
// put your setup code here, to run once:
}

void loop() {
  sensorstate = digitalRead(sensor);
  Serial.println("hello");
  if (sensorstate == HIGH)
  {
    digitalWrite(motor,LOW);
  } else {
    digitalWrite(motor,HIGH);
  }
  // put your main code here, to run repeatedly:

}
