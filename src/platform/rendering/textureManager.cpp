#include "textureManager.hpp"

#include <stdexcept>

#include "../../core/paths/assetsPath.hpp"
#include "../../core/paths/tilesPaths.hpp"

#include <SDL3/SDL.h>

Textures::Textures() : verified(false) {}

Textures::~Textures(){
    for (auto& [id, data] : playerTextures) {
        (void)id;
        if (data.texture) {
            SDL_DestroyTexture(data.texture);
            data.texture = nullptr;
        }
    }
}

void Textures::load(SDL_Renderer& renderer) {
    if (!loadTexture(renderer, playerTextures, AssetsPath) &&
        !loadTexture(renderer, tilesTextures, TilesPath) ) {
        throw std::runtime_error("Error loading textures");
    }
    
}

bool Textures::verify(){
    return verified;
}