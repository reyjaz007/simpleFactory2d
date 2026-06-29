#include "player.hpp"

Player::Player() : Entity {1000} {
    movement.moveDown(collision);
}

