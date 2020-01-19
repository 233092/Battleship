#ifndef SHIP_H
#define SHIP_H

#include <vector>

#include "Mast.h"

class Ship {
    public:
        Ship(int shipSize, bool isHorizontal);
        int getSize();
        bool getIsHorizontal();
        std::vector<Mast*> mastsList;

    private:
        int shipSize;
        bool isHorizontal;
};

#endif // SHIP_H
