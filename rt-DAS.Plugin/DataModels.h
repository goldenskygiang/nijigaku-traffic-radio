#pragma once
#include <string>

class PositionUpdate
{
public:
    std::string car_id;
    int coordinates[3];
    bool is_crash;
};
