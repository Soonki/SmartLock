#pragma once

class Toggle {
private:
    bool last_state;
    int pin;

public:
    Toggle(/* args */);
    ~Toggle();

    bool update();
    bool getState() const;
};
