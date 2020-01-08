#include "Ship.h"

Ship::Ship() {
}

Ship::~Ship() {
}

void Ship::addMast(Mast* singleMast) {
    mastsList.push_back(singleMast);
}
