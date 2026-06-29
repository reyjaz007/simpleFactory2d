#pragma once 

#include "../../logic/Systems/collision.hpp"

class Entity {
public:
    Entity(int ID);
    ~Entity();

protected:
    int ID;

    Collision collision {};

};