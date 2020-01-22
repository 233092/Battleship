#ifndef PRINTER_H
#define PRINTER_H

#include "Board.h"

class Printer {
    public:
        virtual void printBoard(Board* gameBoard) = 0;
        virtual void printStatistics(Board* gameBoard) = 0;
        virtual void printShipsOnBoard(Board* gameBoard) = 0;
        virtual void printMenu() = 0;
};

#endif // PRINTER_H
