#include "movement.hpp"

#include "../../entities/player/player.hpp"

// Movement functions    

void Movement::moveUp() {
    posY -= speed * deltaTime;
}

void Movement::moveDown() {
    posY += speed * deltaTime;
}

void Movement::moveLeft() {
    posX -= speed * deltaTime;
}

void Movement::moveRight() {
    posX += speed * deltaTime;
}
