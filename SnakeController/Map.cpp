#include "Map.hpp"

#include <algorithm>
#include <sstream>

namespace Snake
{
    Map::Map(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int Map::getX()
    {
        return x;
    }

    int Map::getY()
    {
        return y;
    }
}