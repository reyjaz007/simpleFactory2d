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

void Entity::draw() {
    sprite.setPosition(200, 100); // Example position   
    sprite.setScale(2.0f, 2.0f); // Example scale
    std::cout << "Entity drawn." << std::endl; 
}

void Entity::update() {
    std::cout << "Entity updated." << std::endl;
}

void Entity::render() {
    draw();
    std::cout << "Entity rendered." << std::endl;
}