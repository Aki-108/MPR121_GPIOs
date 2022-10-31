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

// Add the library to the sketch.
#include "MPR121_GPIOs.h"

// Add a MPR121 Module to your sketch.
MPR121 mpr = MPR121();

void setup() {
    // The Serial Port is only needed in this example to see something happen.
    Serial.begin(9600);
    // Start running the module on the I2C Bus with the address 0x5A.
    mpr.begin();
}

void loop() {
    // Read which pin of the module is touched.
    int touches = mpr.touchRead();
    // The touches get shown in the Serial Monitor.
    Serial.println(touches, BIN);
    delay(500);
}
