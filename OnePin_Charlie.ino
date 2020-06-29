// A quick example of a one-pin adaptation of Charlieplexing.
// This drives two LEDs from a single Arduino pin (12 in this sketch)
//
// An OUTPUT of HIGH will turn on one; and output of LOW the other.
//
// Switching the pin to INPUT puts it into a high impedance  state and turns off both LEDs.
//

// define the digital pin(s) fo use in the sketch.
const int led_pin = 12;

void setup()
{
  // set digital pin led_pin as an input to turn both off.
  pinMode(led_pin, INPUT);
  // pause to demonstrate that both LEDs are now off
  delay(3000);
}

// the loop function runs over and over again forever
void loop()
{
  // Flash the GREEN LED 10times.
  for ( int i = 0; i < 10; i++ )
  {
    // set digital pin led_pin as an output.
    pinMode(led_pin, OUTPUT);

    digitalWrite(led_pin, HIGH);   // turn the one LED on and the other off
    delay(250);                    // wait so that everyone can see.

    // set digital pin led_pin as an input to turn both off.
    pinMode(led_pin, INPUT);
    delay(250);                    // wait so that everyone can see.

  }
  // pause to demonstrate that both LEDs are now off
  delay(100);

  // Flash the RED LED 10 times.
  for ( int i = 0; i < 10; i++ )
  {
    // set digital pin led_pin as an output.
    pinMode(led_pin, OUTPUT);

    digitalWrite(led_pin, LOW);   // turn the one LED on and the other off
    delay(250);                    // wait so that everyone can see.

    // set digital pin led_pin as an input to turn both off.
    pinMode(led_pin, INPUT);
    delay(250);                    // wait so that everyone can see.

  }

  // pause to demonstrate that both LEDs are now off
  delay(100);

  // Alternatly flash the LEDs 10 times each and then turn both off.
  for ( int i = 0; i < 10; i++ )
  {
    // set digital pin led_pin as an output.
    pinMode(led_pin, OUTPUT);

    // GREEN
    digitalWrite(led_pin, HIGH);   // turn the one LED on and the other off (HIGH is the voltage level)
    delay(250);                    // wait so that everyone can see.

    // RED
    digitalWrite(led_pin, LOW);    // switch by making the voltage LOW
    delay(250);                    // wait so that everyone can see.

    digitalWrite(led_pin, HIGH);   // switch back
    delay(250);                    // wait so that everyone can see.

    // GREEN
    digitalWrite(led_pin, LOW);    // swap one more time
    delay(250);                    // wait so that everyone can see.

    // RED
    // set digital pin led_pin as an input to turn both off.
    pinMode(led_pin, INPUT);

    // pause to demonstrate that both LEDs are now off
    delay(2500);
  }

  // add additional time between cycles
  delay(500);

}
