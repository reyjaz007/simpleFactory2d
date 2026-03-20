#pragma once

#include <iostream>
#include "../platform/sfmlWindow.hpp"
#include "../entities/entitiesHandler.hpp"

class Game {
public:
    const unsigned int WIDTH = 1280;
    const unsigned int HEIGHT = 720;
    const std::string TITLE = "Simple Factory 2D";

    Game();
    virtual ~Game();
    void run();
private:
    SfmlWindow window {WIDTH, HEIGHT, TITLE};

    Entities entities;
    
    void gameLoop();
    
    void update();
    void render();
};