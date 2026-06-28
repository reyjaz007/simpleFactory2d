#pragma once

//std
#include <iostream>

//SDL
#include <SDL3/SDL.h>

#include "../platform/window/sdlWindow.hpp"
#include "../platform/window/sdlContext.hpp"
#include "../platform/events/sdlEvents.hpp"
#include "../platform/rendering/renderManager.hpp"
#include "../platform/rendering/textureManager.hpp"

class Game {
public:
    Game();
    ~Game();
    
private:
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const std::string TITLE = "Simple Factory 2D";
    float deltaTime = 0.0f;

    Context sdl {};

    Window window {TITLE, WIDTH, HEIGHT};

    Events events {};

    Render render {};

    Textures textures {};
    
    void init();
    void run();
    void update();

};
