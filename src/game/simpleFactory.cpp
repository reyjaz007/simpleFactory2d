//std
#include <iostream>
#include <stdexcept>
#include <optional>

#include "../entities/entitiesHandler.hpp"

#include "simpleFactory.hpp"

Game::Game() {
}

Game::~Game() {
}

void Game::run() {
    gameLoop();
}

void Game::gameLoop() {
    while (!window.shouldClose()) {
        window.pollEvent();
        render();
        update();
    }

}

void Game::update() {
    entities.update();
}

void Game::render() {
    window.render();
    window.draw(entities.getPlayerSprite());
    window.display();
}