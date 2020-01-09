#include "BoardField.h"

BoardField::BoardField(Mast mast, Ship* mastOwner) {
    this->mast = mast;
    this->mastOwner = mastOwner;
}

BoardField::~BoardField() {
}
