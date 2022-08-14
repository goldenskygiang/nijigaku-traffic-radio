#pragma once
#include <string>

#include "nlohmann/json.hpp"

class PositionUpdate
{
public:
    PositionUpdate() {}

    PositionUpdate(std::string id, double x, double y, bool crash)
    {
        car_id = id;
        X = x, Y = y;
        is_crash = crash;
    }

    std::string car_id;
    double X, Y;
    bool is_crash;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(PositionUpdate, car_id, X, Y, is_crash)
};
