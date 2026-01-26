// C++ code
/*
    Tested
    working with version 1 of the board when using 10k ohm resistors as current limit resistor but noticeable delay
    not working with updated version with 330 ohm resistors as current limit resistor(Issue: on and off loop in 0.5 second
    caused by the brightness of the light bulb affecting the photoresistor)
*/
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
  } else{
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
  }
  delay(500);
}
