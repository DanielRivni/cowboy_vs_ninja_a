#include "Ninja.hpp"
#include <stdexcept>
#include <cmath>
using namespace std;
namespace ariel
{
    // Constructors
    Ninja::Ninja(string name, Point location, int speed, int HealthPoints) : Character(name, location, HealthPoints), speed(speed) {}
    //  Ninja::Ninja(const Ninja &other) : Character(other.getName(), other.getLocation(), other.getHitPoints()), speed(other.speed) {}

    Ninja::~Ninja() {}

    YoungNinja::YoungNinja(string name, Point location) : Ninja(name, location, 14, 100) {}

    TrainedNinja::TrainedNinja(string name, Point location) : Ninja(name, location, 12, 120) {}

    OldNinja::OldNinja(string name, Point location) : Ninja(name, location, 8, 150) {}

    // Functions
    void Ninja::move(Character *enemy) {}

    void Ninja::slash(Character *enemy) {}

    int Ninja::getSpeed()
    {
        return speed;
    }
}