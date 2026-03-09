//std
#include <iostream>

#include "simpleFactory.hpp"


void Game::run() {
    initialize();
    gameloop();
}

void Game::initialize() {
    gameloop();
}


void Game::gameloop() {
    while (!window.shouldClose()) {
        update();
        render();
    }
}
void Game::update() {
    std::cout << "Updating the game..." << std::endl;
}

void Game::render() {
    std::cout << "Rendering the game..." << std::endl;
}