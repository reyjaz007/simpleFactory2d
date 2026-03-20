#pragma once 

#include "../entity.hpp"

class Player : public Entity {
private:
    const std::string PLAYERPATH = "assets/entities/player.png";
    int health = 100;
    std::vector<int> *inventory;

public:
    Player();
    virtual ~Player();
};