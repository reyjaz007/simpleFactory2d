#pragma once

#include <SDL3/SDL.h>

#include "../../core/ids/assetsID.hpp"
#include "textureManager.hpp"

class Render{
public:
    Render();
    ~Render();

    void setRenderer(SDL_Renderer& renderer);
    void setTextureManager(Textures& textureManager);

    void draw(AssetsID id, float x, float y);

private:
    SDL_Renderer* renderer;
    Textures* textures;

};