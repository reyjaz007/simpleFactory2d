 #pragma once
 
 #include <iostream>
 #include "SFML/Graphics.hpp"

 class Entity {
protected:
    const std::string PATH;
    sf::Texture *texture;

public:

    sf::Sprite *sprite = new sf::Sprite();

    void update();
    void render();
    void draw();

    Entity(const std::string &path);
    virtual ~Entity();
};
