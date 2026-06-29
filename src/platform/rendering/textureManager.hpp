#pragma once

#include <SDL3/SDL_render.h>

#include <unordered_map>

#include "../../core/ids/assetsID.hpp"

class Textures {
public:
    struct TextureData {
        SDL_Texture* texture = nullptr;
        float width = 0.0f;
        float height = 0.0f;
    };

    Textures();
    ~Textures();

    void load(SDL_Renderer& renderer);

    bool verify();

    float getHeight(AssetsID id);
    float getWidth(AssetsID id);
    SDL_Texture* getTexture(AssetsID id);

private:
    bool verified;
    std::unordered_map<AssetsID, TextureData> textures;
};
