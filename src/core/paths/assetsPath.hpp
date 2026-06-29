#pragma once

#include <unordered_map>
#include <string>
#include "../ids/assetsID.hpp"

const std::unordered_map<AssetsID, std::string> AssetsPath = {
    {AssetsID::Player,  "assets/entities/player.png"},
    {AssetsID::Tiles,   "assets/noTexture.png"},
    {AssetsID::NoTexture, "assets/noTexture.png"}
};