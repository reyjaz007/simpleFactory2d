#include "textureManager.hpp"

#include <stdexcept>

#include "../../assets/assetsPath.hpp"

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

Textures::Textures() : verified(false) {}

Textures::~Textures(){
    for (auto& [id, data] : textures) {
        (void)id;
        if (data.texture) {
            SDL_DestroyTexture(data.texture);
            data.texture = nullptr;
        }
    }
}

void Textures::load(SDL_Renderer& renderer) {
    for (const auto& [id, path] : AssetsPath) {
        SDL_Surface* surface = IMG_Load(path.c_str());
        if (!surface) {
            throw std::runtime_error(std::string("Failed to load image: ") + path + " | " + SDL_GetError());
        }

        SDL_Texture* texture = SDL_CreateTextureFromSurface(&renderer, surface);
        if (!texture) {
            SDL_DestroySurface(surface);
            throw std::runtime_error(std::string("Failed to create texture: ") + path + " | " + SDL_GetError());
        }

        auto existing = textures.find(id);
        if (existing != textures.end() && existing->second.texture) {
            SDL_DestroyTexture(existing->second.texture);
        }

        TextureData data;
        data.texture = texture;
        data.width = static_cast<float>(surface->w);
        data.height = static_cast<float>(surface->h);
        textures[id] = data;

        SDL_DestroySurface(surface);
    }

    verified = true;
}


bool Textures::verify(){
    return verified;
}

float Textures::getHeight(AssetsID id){
    const auto it = textures.find(id);
    if (it == textures.end()) {
        return 0.0f;
    }

    return it->second.height;
}

float Textures::getWidth(AssetsID id){
    const auto it = textures.find(id);
    if (it == textures.end()) {
        return 0.0f;
    }

    return it->second.width;
}

SDL_Texture* Textures::getTexture(AssetsID id){
    const auto it = textures.find(id);
    if (it == textures.end()) {
        return nullptr;
    }

    return it->second.texture;
}
