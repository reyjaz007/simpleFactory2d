 #pragma once
 
 #include <iostream>
 #include "SFML/Graphics.hpp"

class Entity {    
protected:
    float deltaTime;

    const std::string PATH = " ";
    sf::Texture texture = sf::Texture();

public:

    sf::Sprite sprite;

    void update(float deltaTime);
   

    Entity(const std::string &path);
    virtual ~Entity();
};
