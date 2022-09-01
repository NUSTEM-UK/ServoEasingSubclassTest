#ifndef ServoEasingSubclassTest_h
#define ServoEasingSubclassTest_h

#include <Arduino.h>
// Following line required here to suppress warning, even though it's incorrect.
#define SUPPRESS_HPP_WARNING
#include <ServoEasing.h>


class TestServo : public ServoEasing {
    public:
        TestServo();
        uint8_t myProperty;
        uint8_t getPrivateProperty();
    private:
        uint8_t _servoPin;
        uint8_t _myPrivateProperty;

};

#endif
