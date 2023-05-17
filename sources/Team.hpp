#ifndef TEAM_H
#define TEAM_H
#include <list>
#include <stdexcept>
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"
namespace ariel
{
    class Team
    {
    private:
        std::list<Character *> team;
        Character *leader;

    public:
        Team(Character *leader);
        ~Team();
        void add(Character *figure);
        void attack(Team *other);
        int stillAlive();
        void print();
        Character *getLeader();
        std::list<Character *> getTeam();
    };
    class Team2 : public Team
    {
    public:
        Team2(Character *leader);
        void add(Character *figure);
    };

    class SmartTeam : public Team
    {
    public:
        SmartTeam(Character *leader);
        void add(Character *figure);
    };
}

#endif
