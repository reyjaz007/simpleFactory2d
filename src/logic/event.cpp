#include "event.hpp"

Event::Event(Entities &entities) {
    this->entities = &entities;
}

Event::~Event() {
    entities = nullptr;
    delete entities;
}

void Event::pollEvent(float deltaTime) {
    switch (event.KeyPressed)
    {
    case sf::Keyboard::W:
        entities->player.moveUp(deltaTime);
        break;

    case sf::Keyboard::S:
        entities->player.moveDown(deltaTime);
        break;

    case sf::Keyboard::A:
        entities->player.moveLeft(deltaTime);
        break;

    case sf::Keyboard::D:
        entities->player.moveRight(deltaTime);
        break;

    default:
        break;
    }
}
