#include "Team.hpp"
using namespace std;
namespace ariel
{

    Team::Team(Character *leader) : leader(leader) {}

    Team2::Team2(Character *leader) : Team(leader) {}

    SmartTeam::SmartTeam(Character *leader) : Team(leader) {}

    Team::~Team()
    {
        this->team.clear();
    }

    void Team::add(Character *figure) {}

    void Team2::add(Character *figure) {}

    void SmartTeam::add(Character *figure) {}

    void Team::print() {}

    int Team::stillAlive() { return 0; }

    void Team::attack(Team *other) {}

    Character *Team::getLeader()
    {
        return leader;
    }

    list<Character *> Team::getTeam()
    {
        return team;
    }
}