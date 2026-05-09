#pragma once

#include <SFML/Window.hpp>
#include "../entities/handlers/entitiesHandler.hpp"

class Event {
private:
    Entities *entities;
    
public:
    Event(Entities &entities);
    virtual ~Event();

    void playerMove();    
};
