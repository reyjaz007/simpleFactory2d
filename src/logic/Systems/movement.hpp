#pragma once 

class Movement {
public:
    Movement(int speed);
    ~Movement();

    void move(int deltaX, int deltaY);

    int getX() const { return x; }
    int getY() const { return y; }

private:
    int speed;

    int x;
    int y;
};
