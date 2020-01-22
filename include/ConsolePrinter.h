#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H

#include "Printer.h"

class ConsolePrinter : Printer {
    public:
        ConsolePrinter() = default;
        void printBoard(Board* gameBoard);
        void printStatistics(Board* gameBoard);
        void printShipsOnBoard(Board* gameBoard);
        void printMenu();

};

#endif // CONSOLEPRINTER_H
