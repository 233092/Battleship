#include "Mast.h"

Mast::Mast() : destroyed(false), mastOwner(nullptr) {
}

void Mast::destroy() {
    destroyed = true;
}

bool Mast::getIsDestroyed() {
    return destroyed;
}

void Mast::setOwner(Ship* owner) {
    mastOwner = owner;
}

Ship* Mast::getOwner() {
    return mastOwner;
}

