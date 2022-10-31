/*
    MPR121_Basic

    This example shows you the minimum of code required
    to get the MPR121 Touch Sensor running.

    The MPR121 Module has to be connected to the I2C Bus.

    Created 31st Oct 2022
    By Aki108
    Modified 31st Oct 2022
    By Aki108

    https://github.com/Aki-108/MPR121_GPIOs

*/

#include "MPR121_GPIOs.h"

MPR121 mpr = MPR121();

void setup() {
  Serial.begin(9600);
  mpr.begin();
}

void loop() {
  int touches = mpr.touchRead();
  Serial.println(touches, BIN);
  delay(500);
}
