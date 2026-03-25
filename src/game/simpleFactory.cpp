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
    int n = 0;

    while (!window.shouldClose()) {
        window.pollEvent();

        float deltaTime = clock.restart().asSeconds();

        render();
        std::cout << n;
        update(deltaTime);
        n++;
    }

}

void Game::update(float deltaTime) {
    entities.update();
}

void Game::render() {
    window.render();
    window.draw(entities.getPlayerSprite());
    window.display();
}