#pragma once 

#include "../../logic/Systems/health.hpp"
#include "../../logic/Systems/movement.hpp"

class Entity {
public:
    Entity();
    ~Entity();

private:
    Health health;
    Movement movement {1};
};