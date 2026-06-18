#include "movement.hpp"

Movement::Movement(int speed) {
    this->speed = speed;
    this->x = 0;
    this->y = 0;
}

Movement::~Movement() {
}

void Movement::move(int deltaX, int deltaY) {
    x += deltaX * speed;
    y += deltaY * speed;
}