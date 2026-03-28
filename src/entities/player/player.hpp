#pragma once 

#include "../entity.hpp"

class Player : public Entity {
private:

    int health = 100;
    std::vector<int> *inventory;

public:

    //movement functions
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();


    Player();
    virtual ~Player();
};