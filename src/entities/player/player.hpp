#pragma once 

#include "../entity.hpp"

class Player : public Entity {
private:
    int health = 100;
    std::vector<int> *inventory;

    void drawCharacter();

public:
    Player();
    virtual ~Player();
};