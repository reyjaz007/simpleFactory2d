#include "movement.hpp"

#include "../../entities/player/player.hpp"

Movement::Movement() {

}

Movement::~Movement() {

}

void Movement::moveUp(float deltaTime) {
    posY -= speed * deltaTime;
}

void Movement::moveDown(float deltaTime) {
    posY += speed * deltaTime;
}

void Movement::moveLeft(float deltaTime) {
    posX -= speed * deltaTime;
}

void Movement::moveRight(float deltaTime) {
    posX += speed * deltaTime;
}
