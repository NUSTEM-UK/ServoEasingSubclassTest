#include <ServoEasingSubclassTest.h>

TestServo::TestServo() {
    myProperty = 0;
    _myPrivateProperty = 128;
}

uint8_t TestServo::getPrivateProperty() {
    return _myPrivateProperty;
}
