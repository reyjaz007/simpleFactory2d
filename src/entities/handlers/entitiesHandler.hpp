#pragma once

#include "../player/player.hpp"


class Entities {
private:
    float deltaTime;

public:
    Entities();
    virtual ~Entities();

    void getDeltaTime(float deltaTime);
    void update(float deltaTime);


    sf::Sprite getPlayerSprite();

    Player player = Player();

};
