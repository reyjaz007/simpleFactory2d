#include "player.hpp"

#include  <iostream>

Player::Player() : Entity {0} {
    movement.setSpeed(100);
}

Player::~Player() {}

void Player::setInputs(Input& input) {
    movement.setInputs(input);
}

void Player::update(float deltaTime) {
    movement.setDeltaTime(deltaTime);
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