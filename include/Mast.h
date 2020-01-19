#ifndef MAST_H
#define MAST_H

class Ship;

class Mast {
    public:
        Mast();
        void destroy();
        bool getIsDestroyed();
        void setOwner(Ship* owner);
        Ship* getOwner();

    private:
        bool destroyed;
        Ship* mastOwner;
};

#endif // MAST_H
