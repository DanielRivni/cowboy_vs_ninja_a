#include "Cowboy.hpp"

using namespace std;
namespace ariel
{
    // Constructors
    Cowboy::Cowboy(string name, Point location) : Character(name, location, 110), bullets(6) {}
    // Cowboy::Cowboy(Cowboy &other) : Character(other.getName(), other.getLocation(), other.getHitPoints()), bullets(other.bullets) {}

    Cowboy::~Cowboy() {}

    // Functions
    void Cowboy::shoot(Character *other) {}

    bool Cowboy::hasBullets()
    {
        return true;
    }

    void Cowboy::reload() {}

    // Getters and Setters
    int Cowboy::getBullets()
    {
        return bullets;
    }
}