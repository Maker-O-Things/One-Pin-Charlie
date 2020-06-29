# One-Pin-Charlie
Control two LEDs with a single Arduino digital pin

This is a special case of Charlieplexing as presented on the YouTube channel learnelectronics in the video titled "How to Charlieplex LEDs with an Arduino".  Video link here: https://youtu.be/-4iDWSiCS0s.  What I present here is a use case wherein a pair of LEDs each indicate a particular state of processing.  In this case READ and WRITE by a TCP client.  Since both are mutually exclusive, I reasoned that I could save myself a pin by attaching one LED (RED for read) to Vcc oriented one way and the other (GREEN for write) to ground oriented the other.  This allows a single pin to indicate each and when in tri-state, high impedeance (INPUT) mode to indicate neither.  The accompanying schematic shows hoe this hooks up to an Arduino UNO.

NOTE:  The schematic shows the digital pins but NOT the placement on the board.  Use a board layout schematic for that.  I used digital pin 12 but any digital pin should work.
