//std
#include <iostream>
#include <stdexcept>
#include <optional>

#include "simpleFactory.hpp"

Game::Game() {
}

Game::~Game() {
}

void Game::run() {
    initialize();
}

void Game::initialize() {
    gameloop();
}


void Game::gameloop() {
    while (!window.shouldClose()) {
        window.pollEvent();
        update();
        render();
    }

}

void Game::update() {
}

void Game::render() {
    window.render();
    //draw logic here
    window.display();
}