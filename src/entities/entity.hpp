 #pragma once
 
 #include <iostream>
 #include "SFML/Graphics.hpp"

class Entity {    
protected:
    int posX, posY;

    const std::string PATH = " ";
    sf::Texture texture = sf::Texture();

public:

    sf::Sprite sprite;

    void update();
    void render();

    Entity(const std::string &path);
    virtual ~Entity();
};
