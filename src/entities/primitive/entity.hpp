#pragma once 

#include "../../logic/systems/collision.hpp"

class Entity {
public:
    Entity(int ID);
    ~Entity();

    int getID();

protected:
    Collision collision {0,0,0,0};

private:
    int ID;

};