#ifndef SHIP_H
#define SHIP_H

#include <vector>

#include "Mast.h"

class Ship
{
    public:
        Ship();
        virtual ~Ship();
        void addMast(Mast* singleMast);

    private:
        std::vector<Mast*> mastsList;
};

#endif // SHIP_H
