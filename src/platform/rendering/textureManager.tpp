#include "textureManager.hpp"

#include <stdexcept>

#include <SDL3_image/SDL_image.h>

template<typename ID>
bool Textures::loadTexture(SDL_Renderer& renderer,
                    std::unordered_map<ID, TextureData> textures,
                    const std::unordered_map<ID, std::string> paths) {
    for (const auto& [id, path] : paths) {
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
    return verified;
}
