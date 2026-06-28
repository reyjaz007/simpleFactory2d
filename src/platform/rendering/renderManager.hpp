#pragma once

#include <SDL3/SDL.h>

#include "../../assets/assetsID.hpp"
#include "textureManager.hpp"

class Render{
public:
    Render();
    ~Render();

    void setRenderer(SDL_Renderer& renderer);
    void setTextureManager(Textures& textureManager);

    void draw(AssetsID id);

private:
    SDL_Renderer* renderer;
    Textures* textures;

};