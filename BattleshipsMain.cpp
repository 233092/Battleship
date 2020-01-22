#include <iostream>

#include "Board.h"
#include "Mast.h"
#include "Ship.h"
#include "Statistics.h"
#include "GameFunctionality.h"
#include "ConsolePrinter.h"

using namespace std;

static constexpr int boardSize = 10;

int main() {
    GameFunctionality gameFunc;
    ConsolePrinter printer;
    Board gameBoard(boardSize);
    printer.printMenu();

    while(true) {
        int action;
        bool endGame = false;

        cout << "Choose action: ";
        cin >> action;

        int x, y, shipSize;
        switch(action) {
            case 0:
                printer.printMenu();
                break;
            case 1:
                cout << "x = ";
                cin >> x;
                cout << "y = ";
                cin >> y;
                gameFunc.hitField(&gameBoard, x, y);
                break;
            case 2:
                printer.printBoard(&gameBoard);
                break;
            case 3:
                printer.printStatistics(&gameBoard);
                break;
            case 4:
                cout << "Ship size = ";
                cin >> shipSize;
                cout << "x = ";
                cin >> x;
                cout << "y = ";
                cin >> y;
                gameFunc.addShip(&gameBoard, shipSize, true, x, y);
                break;
            case 5:
                printer.printShipsOnBoard(&gameBoard);
                break;
            case 100:
                endGame = true;
                break;
            default:
                break;
        }

        if(endGame) {
            break;
        }
    }
    return 0;
}
