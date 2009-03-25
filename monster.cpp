#include "monster.h"
#include <stdlib.h>

Monster::Monster()
{
}

Monster::Monster(int health, int healthRange, int MinDamage, int MaxDamage)
{
    Health(health, healthRange);
    updateDamage(MinDamage, MaxDamage);
}

double Monster::Attack()
{
    //update the sprite
    return (rand() % (maxDamage-minDamage) + minDamage);
}

void Monster::Health(int minHealth, int maxHealth)
{
    /*this->*/setHealth((rand() % (maxHealth-minHealth) + minHealth));
}

Monster::~Monster()
{
}
