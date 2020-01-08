#ifndef MAST_H
#define MAST_H


class Mast
{
    public:
        Mast();
        virtual ~Mast();
        void destroy();
        bool isDestroyed();

    private:
        bool destroyed;
};

#endif // MAST_H
