#include "Servo.h"

sl::Servo::Servo(const int _pin, const int _fet_pin, const float _first_input)
    : pin(_pin), fet_pin(_fet_pin), power_on(false) {
    this->esp_servo.setPeriodHertz(50);
    this->esp_servo.attach(this->pin, 500, 2400);
    this->move(_first_input);
}

bool sl::Servo::move(const float input_degree) {
    if (input_degree < 0.f || input_degree > 180.f) {
        return false;
    }

    this->on();
    this->esp_servo.write(input_degree);
    this->off();
    return true;
}

float sl::Servo::getLastInputDegree() const { return this->last_input; }

bool sl::Servo::getPowerState() const { return this->power_on; }
