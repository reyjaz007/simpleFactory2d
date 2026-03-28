#include "entitiesHandler.hpp"
#include "player/player.hpp"

Entities::Entities() {
    //Init Entities
}

 Entities::~Entities() {
    //Delete Entities
}

sf::Sprite Entities::getPlayerSprite() {
    return player.sprite;
}

void Entities::render(){
    player.render();
}

void Entities::update(float deltaTime) {
    player.update();
}