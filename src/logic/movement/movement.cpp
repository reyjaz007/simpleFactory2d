#include "movement.hpp"

#include <SFML/System/Vector2.hpp>

#include "../../entities/player/player.hpp"

Movement::Movement() {

}

Movement::~Movement() {

}

sf::Vector2f Movement::moveUp() {
    return sf::Vector2f(0.0f, -(speed * deltaTime));
}

sf::Vector2f Movement::moveDown() {
    return sf::Vector2f(0.0f, speed * deltaTime);
}

sf::Vector2f Movement::moveLeft() {
    return sf::Vector2f(-(speed * deltaTime), 0.0f);
}

sf::Vector2f Movement::moveRight() {
    return sf::Vector2f(speed * deltaTime, 0.0f);
}

void Movement::getDeltaTime(float deltaTime) {
    this->deltaTime = deltaTime;
}