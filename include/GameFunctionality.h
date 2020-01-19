#ifndef GAME_FUNCTIONALITY_H
#define GAME_FUNCTIONALITY_H

#include "Board.h"
#include "Ship.h"

class GameFunctionality {
    public:
        GameFunctionality();
        virtual ~GameFunctionality();

        void addShip(Board* mainBoard, Ship* ship, int x, int y);
        void hitField(Board* board, int x, int y);

    private:
};

#endif // GAME_FUNCTIONALITY_H
