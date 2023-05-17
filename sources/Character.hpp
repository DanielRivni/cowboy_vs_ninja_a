#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Point.hpp"

namespace ariel
{
    class Character
    {
    private:
        std::string name;
        Point location;
        int hitPoints;

    public:
        Character(std::string name, Point location, int hitPoints);
        // Character(const Character &other);
        ~Character();
        bool isAlive() const;
        double distance(const Character *other) const;
        void hit(int hitPoints);
        std::string print() const;

        // Getters and Setters
        std::string getName() const;
        Point getLocation() const;
        int getHitPoints() const;
        void setName(std::string name);
        void setLocation(Point location);
        void setHitPoints(int hitPoints);
    };

}

#endif
