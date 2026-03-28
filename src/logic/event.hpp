#pragma once

#include <SFML/Window.hpp>
#include "../entities/entitiesHandler.hpp"

class Event {
private:
    Entities *entities;
    sf::Event event;

public:
    Event(Entities &entities);
    virtual ~Event();
    
    void pollEvent();
};