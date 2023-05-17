#include "doctest.h"
#include <stdexcept>
#include <cmath>
using namespace doctest;

#include "sources/Team.hpp"
using namespace ariel;

TEST_CASE("Point")
{
    Point point1(10, 5);
    Point point2(0, 0);
    CHECK(point1.distance(point2) == sqrt(125));
    CHECK_EQ(point1.moveTowards(point1, point2, 5), Point(5.525, 2.765));
    CHECK_EQ(point1.moveTowards(point1, point2, 12), Point(0, 0));
    CHECK_THROWS(point1.moveTowards(point1, point2, -6));
}
TEST_CASE("Character")
{
    Character character1("daniel", Point(5, 10), 50);
    Character character2("yossi", Point(0, 0), 0);
    CHECK(character1.isAlive());
    CHECK_FALSE(character2.isAlive());
    CHECK_EQ(character1.distance(&character2), sqrt(125));
    character1.hit(30);
    CHECK_EQ(character1.getHitPoints(), 20);
    CHECK_EQ(character1.getLocation(), Point(5, 10));
    CHECK_EQ(character1.getName(), "daniel");
    character1.hit(30);
    CHECK_EQ(character1.getHitPoints(), 0);
    CHECK_FALSE(character1.isAlive());
}
TEST_CASE("Cowboy")
{
    Cowboy cowboy1("moshe", Point(5, 10));
    Cowboy enemy("mohamad", Point(7, 8));
    CHECK_EQ(cowboy1.getBullets(), 6);
    CHECK_EQ(cowboy1.getHitPoints(), 110);
    CHECK(cowboy1.isAlive());
    cowboy1.shoot(&enemy);
    CHECK_EQ(cowboy1.getBullets(), 5);
    CHECK_EQ(enemy.getHitPoints(), 100);
    CHECK(cowboy1.hasBullets());
    for (int i = 0; i < 5; i++)
    {
        cowboy1.shoot(&enemy);
    }
    CHECK_FALSE(cowboy1.hasBullets());
    CHECK_EQ(cowboy1.getBullets(), 0);
    CHECK_EQ(enemy.getHitPoints(), 50);
    CHECK_THROWS(cowboy1.shoot(&enemy));
    cowboy1.reload();
    CHECK_EQ(cowboy1.getBullets(), 6);
}
TEST_CASE("Ninja")
{
    YoungNinja ninja1("chung", Point(0, 10));
    CHECK_EQ(ninja1.getSpeed(), 14);
    CHECK_EQ(ninja1.getHitPoints(), 100);
    CHECK(ninja1.isAlive());

    TrainedNinja ninja2("lee", Point(0, 9));
    CHECK_EQ(ninja2.getSpeed(), 12);
    CHECK_EQ(ninja2.getHitPoints(), 120);
    CHECK(ninja2.isAlive());

    OldNinja ninja3("shidoshi", Point(0, 15));
    CHECK_EQ(ninja3.getSpeed(), 8);
    CHECK_EQ(ninja3.getHitPoints(), 150);
    CHECK(ninja3.isAlive());

    ninja1.slash(&ninja2);
    CHECK_EQ(ninja2.getHitPoints(), 80);
    ninja1.slash(&ninja3);
    CHECK_EQ(ninja3.getHitPoints(), 150);
}
