#include "entity.hpp"

Entity::Entity(const int ID) {
    this->ID = ID;
}

Entity::~Entity() {}

int Entity::getID(){
    return ID;
}