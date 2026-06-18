//std
#include <iostream>
#include <stdexcept>
#include <optional>

//SDL
#include <SDL3/SDL.h>

#include "simpleFactory.hpp"

Game::Game() {
    std::cout << "Initializing game..." << std::endl;
    Game::run();
}

Game::~Game() {
    std::cout << "Cleaning up game resources..." << std::endl;
}

void Game::run() {
    std::cout << "Entering main game loop..." << std::endl;

    while (input.update()) {
        
        window.clear();
        window.present();
    }
}
