#pragma once

#include <SFML/Window.hpp>

class Event {
private:
    sf::Event event;

public:
    Event();
    virtual ~Event();
    
    void pollEvent();
};