#include "Ship.h"

Ship::Ship(int shipSize, bool isHorizontal) {
    this->shipSize = shipSize;
    this->isHorizontal = isHorizontal;
}

int Ship::getSize() {
    return shipSize;
}

bool Ship::getIsHorizontal() {
    return isHorizontal;
}
