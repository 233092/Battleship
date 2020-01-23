#include "Board.h"

Board::Board(int boardSize) {
    for(int i = 0; i<boardSize; i++) {
        std::vector<Mast> temp;
        for(int j = 0; j<boardSize; j++) {
            temp.push_back(Mast());
        }
        boardMasts.push_back(temp);
    }
}

unsigned int Board::getSize() {
    return boardMasts.size();
}

unsigned int Board::getNumOfShips() {
    return shipsList.size();
}
