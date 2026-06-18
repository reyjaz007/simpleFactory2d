#include "health.hpp"

Health::Health() {
    healthPoints = 100;
}

Health::~Health() {
}

int Health::getHealthPoints() const {
    return healthPoints;
}

void  Health::takeDamage(int damage) {
    healthPoints -= damage;
    
    if (healthPoints < 0) {
        healthPoints = 0;
    }
}
