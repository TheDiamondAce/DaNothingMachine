#include <Servo.h>

#pragma region //Constants of the Module's Pin

#define SWITCH_PIN 8
#define SERVO_PIN 3

#pragma endregion

Servo nothingServo;

void setup() {
    pinMode(SWITCH_PIN, INPUT_PULLUP);
    nothingServo.attach(SERVO_PIN);
}

void loop() {
    if (digitalRead(SWITCH_PIN) == LOW) {
        nothingServo.write(90);
    }
    else {
        nothingServo.write(180);
    }
}