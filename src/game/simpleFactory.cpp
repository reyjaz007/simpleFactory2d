//std
#include <iostream>
#include <stdexcept>
#include <optional>

//SDL
#include <SDL3/SDL.h>

#include "../core/ids/assetsID.hpp"
#include "simpleFactory.hpp"

Game::Game() {
    Game::init();
    Game::run();
}

Game::~Game() {}

void Game::init(){
    render.setRenderer(*window.getRenderer());
    render.setTextureManager(textures);
}

void Game::run() {
    while (events.update()) {      
        window.clear();
        Game::update();
        window.present();
    }
}

void Game::update() {
    render.draw(AssetsID(2), 10, 10);
}