#include <Arduino.h>
#include <ServoEasing.hpp>
#include <ServoEasingSubclassTest.h>

TestServo servo1;

void setup() {
    Serial.begin(115200);
    delay(200);
    Serial.println();
    Serial.println("Starting...");
    // Attach the servo to a pin. 14 should work on, say, an Uno – and on a Wemos D1 maps to D5. I think.
    servo1.attach(14);
    delay(500);
    // Demo that we have a working subclass with properties and methods.
    Serial.println(servo1.myProperty);
    Serial.println(servo1.getPrivateProperty());
}

void loop() {
    // Nothing to do here.
}
