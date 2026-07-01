#pragma once

#include <SDL3/SDL_render.h>

#include <unordered_map>
#include <string>

#include "../../core/ids/assetsID.hpp"
#include "../../core/ids/tileID.hpp"

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

    template<typename ID>
    float getHeight(ID id);

    template<typename ID>
    float getWidth(ID id);

    template<typename ID>
    SDL_Texture* getTexture(ID id);

private:
    template<typename ID>
    bool loadTexture(SDL_Renderer& renderer,
            std::unordered_map<ID, TextureData> textures,
            const std::unordered_map<ID, std::string> paths);

    bool verified;
    
    std::unordered_map<AssetsID, TextureData> playerTextures;
    std::unordered_map<TileID, TextureData> tilesTextures;

};

#include "textureManager.tpp"