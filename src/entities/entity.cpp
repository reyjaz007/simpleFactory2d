#include "entity.hpp"

#include <exception>
#include <iostream>

Entity::Entity(const std::string &path) : PATH(path) {
    // Load the texture and set it to the sprite
    sf::Texture texture;
    if (!texture.loadFromFile(PATH)) {
        throw std::runtime_error("Failed to load texture ");
    } else {
        sprite->setTexture(texture);
    }

}

void Entity::update() {
    std::cout << "Entity updated." << std::endl;
}

void Entity::render() {
    std::cout << "Entity rendered." << std::endl;
}