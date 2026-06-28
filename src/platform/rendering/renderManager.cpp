#include "renderManager.hpp"

#include <stdexcept>

Render::Render() {}

Render::~Render() {}

void Render::setRenderer(SDL_Renderer& renderer){
    this->renderer = &renderer;
}

void Render::setTextureManager(Textures& textureManager){
    this->textures = &textureManager;
    textures->load(*renderer);
}

void Render::draw(AssetsID id){
    if (!textures->verify()) {
        throw std::runtime_error("Texture not loaded. Cannot draw.");
        return;
    }

    const SDL_FRect destRect = { 0, 0, textures->getWidth(id), textures->getHeight(id) };
    SDL_RenderTexture(renderer, textures->getTexture(id), nullptr, &destRect);
}