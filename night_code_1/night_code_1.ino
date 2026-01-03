// C++ code
//
//
void setup()
{
    pinMode(A3, INPUT); // Pin 2(analog pin 3) as input
    pinMode(0, OUTPUT); // Pin 5(PB1) as output
    pinMode(1, OUTPUT); // Pin 6(PB0) as output
  
}

void loop()
{
  int r = analogRead(A3); // analog read from analog pin 3
  if (r > 700) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
  }
  delay(10);
}