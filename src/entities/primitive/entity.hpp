#pragma once 

#include "../../logic/Systems/collision.hpp"

class Entity {
public:
    Entity();
    ~Entity();

protected:
    Collision Collision {};

};