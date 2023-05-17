#ifndef COWBOY_H
#define COWBOY_H

#include "Character.hpp"

namespace ariel
{
    class Cowboy : public Character
    {
    private:
        int bullets;

    public:
        Cowboy(std::string name, Point location);
        //  Cowboy(Cowboy &other);
        ~Cowboy();
        void shoot(Character *other);
        bool hasBullets();
        void reload();
        int getBullets();
    };
}

#endif
