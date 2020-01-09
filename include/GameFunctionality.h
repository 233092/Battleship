#ifndef GAME_FUNCTIONALITY_H
#define GAME_FUNCTIONALITY_H

#include "Board.h"

class GameFunctionality {
    public:
        GameFunctionality();
        virtual ~GameFunctionality();

        void addShip(Board board, int size);
        void hitField(int x, int y);

    private:
};

#endif // GAME_FUNCTIONALITY_H
