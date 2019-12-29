#pragma once
#include "Servo.h"

namespace sl {
class Lock {
private:
    Servo servo;
    bool locked;
    const float kLockDegree;
    const float kUnlockDegree;

private:
    Lock(const Lock& lock);
    void operator=(const Lock& lock);

public:
    Lock();
    ~Lock();

    bool lock();
    bool unlock();
    bool isLocked();
};
}  // namespace sl
