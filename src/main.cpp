#include <Arduino.h>

void setup() {

  Serial.begin(115200);

}

// the loop function runs over and over again forever
void loop() {
  delay(500);                       // wait for a second
  Serial.println("ON");             // print on screen "ON"
  delay(500);                       // wait for a second
  Serial.println("OFF");            // print on screen "OFF"
  delay(500);
}