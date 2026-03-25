#pragma once 

#include "../entity.hpp"

class Player : public Entity {
private:
    int health = 100;
    std::vector<int> *inventory;

public:
    void drawCharacter();

    Player();
    virtual ~Player();
};