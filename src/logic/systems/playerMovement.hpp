#pragma once 

#include "../input/inputManager.hpp"

#include "movement.hpp"

class PlayerMovement : public Movement {
public:
    PlayerMovement();
    ~PlayerMovement();

    void setInputs(Input& input);
    void update(Collision collision);

private:
    Input* input;
};