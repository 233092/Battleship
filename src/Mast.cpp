#include "Mast.h"

Mast::Mast() : destroyed(false) {
}

Mast::~Mast() {
}

void Mast::destroy() {
    destroyed = true;
}

bool Mast::isDestroyed() {
    return destroyed;
}

