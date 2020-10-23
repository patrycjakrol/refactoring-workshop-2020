#pragma once

#include <list>
#include <memory>
#include <functional>


namespace Snake
{
    class Map
    {
        private:
            int x;
            int y;
        public:
            Map(int x, int y);
            int getX();
            int getY();
    };
}