#pragma once

class Movement {
    int speed = 10;
    float posX = 0.0f;
    float posY = 0.0f;

public:

    void moveUp(float deltaTime);
    void moveDown(float deltaTime);
    void moveLeft(float deltaTime);
    void moveRight(float deltaTime);

    Movement();
    virtual ~Movement();
};