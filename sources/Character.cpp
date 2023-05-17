#include "Character.hpp"
using namespace ariel;
using namespace std;

Character::Character(string name, Point location, int hitPoints) : name(name), location(location), hitPoints(hitPoints) {}
// Character::Character(const Character &other) : name(name), location(location), hitPoints(hitPoints) {}
Character::~Character() {}
bool Character::isAlive() const
{
    return true;
}
double Character::distance(const Character *other) const
{
    return 0.0;
}
void Character::hit(int hitPoints) {}
string Character::print() const
{
    return "";
}

// Getter functions for private members
string Character::getName() const
{
    return name;
}

Point Character::getLocation() const
{
    return location;
}

int Character::getHitPoints() const
{
    return hitPoints;
}
void Character::setName(string name)
{
    this->name = name;
}

void Character::setLocation(Point location)
{
    this->location = location;
}

void Character::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}