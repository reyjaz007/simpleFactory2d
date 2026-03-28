#include "entity.hpp"

#include <exception>
#include <iostream>

Entity::Entity(const std::string &path) : PATH(path) {
    // Load the texture and set it to the sprite
    if (!texture.loadFromFile(PATH)) {
        throw std::runtime_error("Failed to load entity texture ");
    } else {
        sprite.setTexture(texture);
    }

}

Entity::~Entity() {
}

void Entity::update() {
    sprite.setPosition(posX, posY); // Update the sprite's position based on the entity's position
}

void Entity::render() {
    sprite.setPosition(posX, posY); // Example position   
    sprite.setScale(1.5f, 1.5f); // Example scale
    std::cout << "Entity rendered." << std::endl;
}
