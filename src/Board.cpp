#include "Board.h"

Board::Board(int size) {
    for(int i = 0; i<size; i++) {
        std::vector<Mast> temp;
        for(int j = 0; j<size; j++) {
            temp.push_back(Mast());
        }
        board.push_back(temp);
    }
}

Board::~Board() {
}
