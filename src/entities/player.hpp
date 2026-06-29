#pragma once 

#include "primitive/entity.hpp"
#include "../logic/systems/playerMovement.hpp"
#include "../logic/systems/health.hpp"

#include <string>

class Player : public Entity{
public:
    Player();
    ~Player();

    void testmoveR ();
    void setInputs(Input& input);
    void update(float deltaTime);

    int getX();
    int getY();

private:
    std::string name;

    Health health {};
    
    PlayerMovement movement {};

};