#include "GameFunctionality.h"

GameFunctionality::GameFunctionality() {
}

GameFunctionality::~GameFunctionality() {
}

void GameFunctionality::hitField(Board* board, int x, int y) {
    board->boardMasts[x][y].destroy();
}

void GameFunctionality::addShip(Board* mainBoard, Ship* ship, int x, int y) {
    mainBoard->shipsList.push_back(ship);
    int shipSize = ship->getSize();
    for(int i = 0; i < shipSize; i++) {
        mainBoard->boardMasts[x][y].setOwner(ship);
        ship->mastsList.push_back(&mainBoard->boardMasts[x][y]);
        if(ship->getIsHorizontal()) {
            y++;
        } else {
            x++;
        }
    }
}
