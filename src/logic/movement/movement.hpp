#pragma once

#include <SFML/System/Vector2.hpp>

class Movement {
private:
    float speed = 100.0f;
    
    float deltaTime;

protected:
    float posX;
    float posY;

public:

    sf::Vector2f moveUp();
    sf::Vector2f moveDown();
    sf::Vector2f moveLeft();
    sf::Vector2f moveRight();

    void getDeltaTime(float deltaTime);

    Movement();
    virtual ~Movement();
};