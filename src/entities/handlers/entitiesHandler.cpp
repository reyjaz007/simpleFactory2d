#include "entitiesHandler.hpp"
#include "../player/player.hpp"

Entities::Entities() {}

 Entities::~Entities() {}

sf::Sprite Entities::getPlayerSprite() {
    return player.sprite;
}


void Entities::update(float deltaTime) {}

void Entities::getDeltaTime(float deltaTime) {
    this->deltaTime = deltaTime;
    player.getDeltaTime(deltaTime);

    std::cout << "x: " << player.posX << " y: " << player.posY << "\n";
}
