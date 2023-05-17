#ifndef NINJA_H
#define NINJA_H

#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(std::string name, Point location, int hitPoints, int speed);
        //     Ninja(const Ninja &other);
        ~Ninja();
        void move(Character *enemy);
        void slash(Character *enemy);
        int getSpeed();
    };
    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(std::string name, Point location);
    };

    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(std::string name, Point location);
    };

    class OldNinja : public Ninja
    {
    public:
        OldNinja(std::string name, Point location);
    };
}

#endif
