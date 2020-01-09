#include "Board.h"

Board::Board(int size) {
    for(int i = 0; i<size; i++) {
        std::vector<BoardField> temp;
        for(int j = 0; j<size; j++) {
            temp.push_back(BoardField(Mast(), nullptr));
        }
        board.push_back(temp);
    }
}

Board::~Board() {
}
