// C++ code
//
const int led=13;
const int buttonpin=2;
int buttonstate =0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop()
{
  buttonstate=digitalRead(buttonpin);
  if (buttonstate==HIGH)
  {
    digitalWrite(led,HIGH);
  }
    else {
      digitalWrite(led,LOW);
    }
 
}