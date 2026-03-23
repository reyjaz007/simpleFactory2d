#pragma once 

#include <SFML/Graphics.hpp>

class Tile {
private:
    const std::string PATH = " ";
    int layer = 0;
    sf::Texture texture = sf::Texture();
    
protected:
    sf::Sprite sprite;

public:
    Tile(const std::string& path);
    virtual ~Tile();
    
    void draw();
};
 