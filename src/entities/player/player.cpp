#include "player.hpp"

Player::Player() : Entity("assets/entities/player.png") {
    drawCharacter();
}

Player::~Player() {
}

void Player::drawCharacter() {
    Entity::draw();
}