#include "GameFunctionality.h"

#include <iostream>

using namespace std;

void GameFunctionality::hitField(Board* gameBoard, int x, int y) {
    gameBoard->boardMasts[x][y].destroy();
    gameBoard->gameStatistics.setShotsTaken(gameBoard->gameStatistics.getShotsTaken() + 1);
    if(gameBoard->boardMasts[x][y].getOwner()) {
        gameBoard->gameStatistics.setAccurateShotsTaken(gameBoard->gameStatistics.getAccurateShotsTaken() + 1);
        cout << "Ship hit" << endl;
    }
    cout << "Shot at: x = " << x << " y = " << y << endl;
}

void GameFunctionality::addShip(Board* gameBoard, unsigned int shipSize, bool isHorizontal, int x, int y) {
    if(gameBoard->boardMasts[y][x].getOwner() ||
       ((gameBoard->getSize() - x) < shipSize) ||
       ((gameBoard->getSize() - y) < shipSize)) {
        cout << "Error: Cannot add ship" << endl;
        return;
    }
    Ship tempShip(shipSize, isHorizontal);
    gameBoard->shipsList.push_back(tempShip);
    gameBoard->gameStatistics.setNumOfShips(gameBoard->getNumOfShips());
    for(unsigned int i = 0; i < shipSize; i++) {
        gameBoard->boardMasts[y][x].setOwner(&tempShip);
        tempShip.mastsList.push_back(&gameBoard->boardMasts[y][x]);
        if(tempShip.getIsHorizontal()) {
            x++;
        } else {
            y++;
        }
    }
}
