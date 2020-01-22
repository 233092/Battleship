#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Mast.h"
#include "Ship.h"
#include "Statistics.h"

class Board {
    public:
        Board(int size);
        std::vector<std::vector<Mast> > boardMasts;
        std::vector<Ship> shipsList;
        Statistics gameStatistics;

    private:
        int size;
        //std::vector<Ship> shipsList;
};

#endif // BOARD_H
