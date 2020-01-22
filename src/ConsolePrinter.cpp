#include "ConsolePrinter.h"

#include <iostream>

using namespace std;

void ConsolePrinter::printBoard(Board* gameBoard) {
    for(unsigned int i = 0; i < gameBoard->boardMasts.size(); i++) {
        for(unsigned int j = 0; j < gameBoard->boardMasts[i].size(); j++) {
            if(gameBoard->boardMasts[i][j].isDestroyed()) {
                if(gameBoard->boardMasts[i][j].getOwner()) {
                    cout << "[X]";
                } else {
                    cout << "[O]";
                }
            } else {
                cout << "[ ]";
            }
        }
        cout << endl;
    }
}

void ConsolePrinter::printStatistics(Board* gameBoard) {
    cout << "All shots: " << gameBoard->gameStatistics.getShotsTaken() << endl;
    cout << "Accurate shots: " << gameBoard->gameStatistics.getAccurateShotsTaken() << endl;
    cout << "All ships: " << gameBoard->gameStatistics.getNumOfShips() << endl;
    cout << "Ships destroyed: " << gameBoard->gameStatistics.getNumOfShipsSunked() << endl << endl;
}

void ConsolePrinter::printShipsOnBoard(Board* gameBoard) {
    for(unsigned int i = 0; i < gameBoard->boardMasts.size(); i++) {
        for(unsigned int j = 0; j < gameBoard->boardMasts[i].size(); j++) {
            if(gameBoard->boardMasts[i][j].getOwner()) {
                cout << "[#]";
            } else {
                cout << "[ ]";
            }
        }
        cout << endl;
    }
}

void ConsolePrinter::printMenu() {
    cout << "0 - show menu" << endl;
    cout << "1 - shoot" << endl;
    cout << "2 - show board" << endl;
    cout << "3 - show statistics" << endl;
    cout << "4 - add ship" << endl;
    cout << "5 - show ships on board" << endl;
    cout << "100 - end game" << endl;
}
