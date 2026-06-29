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
    player.setInputs(input);
}

void Game::run() {
    while (events.update()) {      
        window.clear();
        Game::update();
        window.present();
    }
}

void Game::update() {
    input.update();
    if (input.isKeyDown(SDL_SCANCODE_D)){
        player.testmoveR();
    }
    render.draw(AssetsID(player.getID()), static_cast<float>(player.getX()), static_cast<float>(player.getY()));
    player.update();
}