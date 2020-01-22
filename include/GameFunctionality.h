#ifndef GAME_FUNCTIONALITY_H
#define GAME_FUNCTIONALITY_H

#include "Board.h"
#include "Ship.h"

class GameFunctionality {
    public:
        GameFunctionality() = default;
        void addShip(Board* gameBoard, int shipSize, bool isHorizontal, int x, int y);
        void hitField(Board* gameBoard, int x, int y);
};

#endif // GAME_FUNCTIONALITY_H
