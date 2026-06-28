#pragma once 

#include "primitive/entity.hpp"
#include "../logic/Systems/movement.hpp"
#include "../logic/Systems/health.hpp"

#include <string>

class Player : Entity{
public:
    Player();
    ~Player();

private:
    std::string name;

    Health health {};
    Movement movement {};

};