#pragma once
#include <string>

#include "nlohmann/json.hpp"

class PositionUpdate
{
public:
    PositionUpdate() {}

    PositionUpdate(std::wstring id, double x, double y, bool crash, std::wstring roadName)
    {
        car_id = std::string(id.begin(), id.end());
        X = x, Y = y;
        is_crash = crash;
        road_name = std::string(roadName.begin(), roadName.end());
    }

    std::string car_id, road_name;
    double X, Y;
    bool is_crash;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(PositionUpdate, car_id, X, Y, is_crash, road_name)
};
