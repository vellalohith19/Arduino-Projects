int button =2;
int redLed = 13;
int greenLed =12;
void setup()
{
  pinMode(button, INPUT_PULLUP);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}
void loop()
{
  if(digitalRead(button) ==LOW)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);

  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
}