#pragma once

class BleTag {
private:
    bool last_state;

public:
    BleTag(/* args */);
    ~BleTag();

    bool update();
    bool getState() const;
};
