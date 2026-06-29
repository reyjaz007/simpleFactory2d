#include "playerMovement.hpp"

#include <iostream>

PlayerMovement::PlayerMovement() {}

PlayerMovement::~PlayerMovement() {}

void PlayerMovement::update(Collision collision) {
    if (input->isKeyDown(SDL_SCANCODE_W)){
        std::cout << input->isKeyDown(SDL_SCANCODE_W);
        moveUp(collision);
    }
    if (input->isKeyDown(SDL_SCANCODE_A)){
        //std::cout << "a\n";
        moveLeft(collision);
    }
    if (input->isKeyDown(SDL_SCANCODE_S)){
        //std::cout << "s\n";
        moveDown(collision);
    }
    if (input->isKeyDown(SDL_SCANCODE_D)){
        //std::cout << "d\n";
        moveRight(collision);
    }
}

void PlayerMovement::setInputs(Input& input) {
    this->input = &input;
}