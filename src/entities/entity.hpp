 #pragma once
 
 #include <iostream>
 #include "SFML/Graphics.hpp"

 class Entity {
protected:
    const std::string PATH;
    sf::Sprite *sprite = new sf::Sprite();
    sf::Texture *texture;

public:
    void update();
    void render();

    Entity(const std::string &path);
    virtual ~Entity();
};
