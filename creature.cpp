#include "creature.h"

Creature::Creature()
{
}

void Creature::setHealth(int Health)
{
    health = Health;
}

void Creature::updateDamage(int newMin, int newMax)
{
    minDamage=newMin;
    maxDamage=newMax;
}
