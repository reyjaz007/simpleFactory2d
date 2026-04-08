#include "event.hpp"

Event::Event(Entities &entities) {
    this->entities = &entities;
}

Event::~Event() {
    entities = nullptr;
    delete entities;
}

void Event::keyboardSwitch() {
    switch (event.KeyPressed)
    {
    case sf::Keyboard::W:
        entities->player.moveUp();
        break;

    case sf::Keyboard::S:
        entities->player.moveDown();
        break;

    case sf::Keyboard::A:
        entities->player.moveLeft();
        break;

    case sf::Keyboard::D:
        entities->player.moveRight();
        break;

    default:
        break;
    }
}
