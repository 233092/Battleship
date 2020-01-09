#ifndef BOARD_FIELD_H
#define BOARD_FIELD_H

#include "Mast.h"
#include "Ship.h"

class BoardField
{
    public:
        BoardField(Mast mast, Ship* mastOwner);
        virtual ~BoardField();

    //private:
        Mast mast;
        Ship* mastOwner;
};

#endif // BOARD_FIELD_H
