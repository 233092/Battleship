#ifndef STATISTICS_H
#define STATISTICS_H


class Statistics
{
    public:
        Statistics();
        int getShotsTaken();
        void setShotsTaken(int num);
        int getAccurateShotsTaken();
        void setAccurateShotsTaken(int num);
        int getNumOfShips();
        void setNumOfShips(int num);
        int getNumOfShipsSunked();
        void setNumOfShipsSunked(int num);

    private:
        int shotsTaken;
        int accurateShotsTaken;
        int numOfShips;
        int numOfShipsSunked;
};

#endif // STATISTICS_H
