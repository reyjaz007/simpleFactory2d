#include "player.hpp"

Player::Player() : Entity {0} {
    movement.setSpeed(100);
    movement.setDeltaTime(0.019999);
}

Player::~Player() {}

void Player::setInputs(Input input) {
    movement.setInputs(input);
}

void Player::update() {
    movement.update(collision);
}

int Player::getX() {
    return collision.getX();
}

int Player::getY() {
    return collision.getY();
}

void Player::testmoveR(){
    movement.moveRight(collision);
}