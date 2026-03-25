#pragma once

#include "player/player.hpp"


class Entities {
public:
    Entities();
    virtual ~Entities();

    void update();
    void render();

    sf::Sprite getPlayerSprite();

private:
    Player player = Player();
    
};