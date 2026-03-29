#pragma once

class Movement {
    int speed = 10;
    float posX = 0.0f;
    float posY = 0.0f;
    float deltaTime;

public:

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    Movement();
    virtual ~Movement();
};