//std
#include <iostream>
#include <stdexcept>
#include <optional>

#include "../entities/entitiesHandler.hpp"
#include "../logic/event.hpp"

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
    Event event(entities);
    while (!window.shouldClose()) {
        window.pollEvent();

        float deltaTime = clock.restart().asSeconds();

        render();
        std::cout << n << "\n";
        update(deltaTime);
        n++;
    }

}

void Game::update(float deltaTime) {
    entities.update(deltaTime);
}

void Game::render() {
    window.clear();
    window.draw(entities.getPlayerSprite());
    window.display();
}
