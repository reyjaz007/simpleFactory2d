#pragma once

#include <SDL3/SDL.h>

#include "textureManager.hpp"

class Render{
public:
    Render();
    ~Render();

    void setRenderer(SDL_Renderer& renderer);
    void setTextureManager(Textures& textureManager);

    void draw();

private:
    SDL_Renderer* renderer;
    Textures* textures;

};