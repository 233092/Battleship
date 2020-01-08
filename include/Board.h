#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Mast.h"

class Board
{
    public:
        Board(int size);
        virtual ~Board();
        std::vector<std::vector<Mast> > board;

    private:
        int size;
        std::vector<Ship> shipsList;
};

#endif // BOARD_H
