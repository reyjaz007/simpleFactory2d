#pragma once

#include "player/player.hpp"


class Entities {
public:
    Entities();
    ~Entities();

    void update();
    void render();

private:
    Player *player;

};