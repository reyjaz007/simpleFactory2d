#include "entitiesHandler.hpp"
#include "player/player.hpp"

Entities::Entities() {
    //Init Entities
    player = new Player();
}

Entities::~Entities() {
    //Delete Entities
    delete player;
}

sf::Sprite &Entities::getPlayerSprite() {
    return *player->sprite;
}

void Entities::render(){
    player->render();
}

void Entities::update() {
    player->update();
}