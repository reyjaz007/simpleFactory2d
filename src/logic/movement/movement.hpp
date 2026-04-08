#pragma once

class Movement {
    int speed = 10;
    
    float deltaTime;

public:

    float posX = 0.0f;
    float posY = 0.0f;

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    void getDeltaTime(float deltaTime);

    Movement();
    virtual ~Movement();
};