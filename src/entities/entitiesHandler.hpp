#pragma once

#include "player/player.hpp"


class Entities {
public:
    Entities();
    virtual ~Entities();

    void update(float deltaTime);
    void render();

    sf::Sprite getPlayerSprite();

    Player player = Player();
};
