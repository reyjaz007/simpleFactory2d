#include "player.hpp"

Player::Player() : Entity("assets/entities/player.png") {
    posX = 200;
    posY = 200;
}

Player::~Player() {
}

void Player::drawCharacter() {
    Entity::draw();
}

