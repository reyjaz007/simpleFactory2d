#pragma once 

class Health {
public:
    Health();
    ~Health();

    int getHealthPoints() const;

    void takeDamage(int damage);

private:

    int healthPoints;
};