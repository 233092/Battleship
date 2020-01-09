#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Mast.h"
#include "Ship.h"
#include "BoardField.h"

class Board
{
    public:
        Board(int size);
        virtual ~Board();
        std::vector<std::vector<BoardField> > board;

    private:
        int size;
        std::vector<Ship> shipsList;
};

#endif // BOARD_H
