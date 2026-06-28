#include "renderManager.hpp"

Render::Render() {}

Render::~Render() {}

void Render::setRenderer(SDL_Renderer& renderer){
    this->renderer = &renderer;
}

void Render::setTextureManager(Textures& textureManager){
    this->textures = &textureManager;
}

void Render::draw(){
    
}