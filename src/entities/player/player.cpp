#include "player.hpp"

Player::Player() : Entity("assets/entities/player.png") {
    posX = 200;
    posY = 200;
}

Player::~Player() {
    inventory->clear();
    inventory = nullptr;
    delete inventory;
}

// Movement functions    

void Player::moveUp() {
    posY -= 10;
}

void Player::moveDown() {
    posY += 10;
}

void Player::moveLeft() {
    posX -= 10;
}

void Player::moveRight() {
    posX += 10;
}
