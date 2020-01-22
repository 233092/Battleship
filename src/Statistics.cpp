#include "Statistics.h"

Statistics::Statistics() : shotsTaken(0), accurateShotsTaken(0),
    numOfShips(0), numOfShipsSunked(0) {
}

void Statistics::setAccurateShotsTaken(int num) {
    accurateShotsTaken = num;
}

int Statistics::getAccurateShotsTaken() {
    return accurateShotsTaken;
}

void Statistics::setNumOfShips(int num) {
    numOfShips = num;
}

int Statistics::getNumOfShips() {
    return numOfShips;
}

void Statistics::setNumOfShipsSunked(int num) {
    numOfShipsSunked = num;
}

int Statistics::getNumOfShipsSunked() {
    return numOfShipsSunked;
}

void Statistics::setShotsTaken(int num) {
    shotsTaken = num;
}

int Statistics::getShotsTaken() {
    return shotsTaken;
}


