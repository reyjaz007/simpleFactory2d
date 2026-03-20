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

void Entities::render(){
    player->render();
}

void Entities::update() {
    player->update();
}