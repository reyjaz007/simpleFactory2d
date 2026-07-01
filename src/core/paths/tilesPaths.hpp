#pragma once

#include <unordered_map>
#include <string>
#include "../ids/tileID.hpp"

const std::unordered_map<TileID, std::string> TilesPath = {
    {TileID::Grass,  "assets/tiles/tile.png"}
};