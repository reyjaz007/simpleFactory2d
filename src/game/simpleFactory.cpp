//std
#include <iostream>
#include <stdexcept>
#include <optional>

//SDL
#include <SDL3/SDL.h>

#include "simpleFactory.hpp"

Game::Game() {
    Game::init();
    Game::run();
}

Game::~Game() {}

void Game::init(){
    render.setRenderer(*window.getRenderer());
}

void Game::run() {
    while (events.update()) {      
        window.clear();
        Game::update();
        window.present();
    }
}

void Game::update() {
    render.draw();
}