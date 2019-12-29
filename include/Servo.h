#pragma once
#include <ESP32Servo.h>

using EspServo = Servo;

namespace sl {

class Servo {
private:
    int pin;
    int fet_pin;
    float last_input;
    bool power_on;
    EspServo esp_servo;

public:
private:
    Servo(const Servo& servo);
    void operator=(const Servo& src);

public:
    Servo(const int pin, const int fet_pin, const float first_input);
    ~Servo();
    bool move(const float input_degree);
    float getLastInputDegree() const;
    bool getPowerState() const;
    bool on();
    bool off();
};

}  // namespace sl
