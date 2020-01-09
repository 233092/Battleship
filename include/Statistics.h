#ifndef STATISTICS_H
#define STATISTICS_H


class Statistics
{
    public:
        Statistics();
        virtual ~Statistics();

    private:
        int shotsTaken;
        int accurateShotsTaken;
        int numOfShips;
        int numOfShipsSunked;
};

#endif // STATISTICS_H
