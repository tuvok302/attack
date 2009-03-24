#include "monster.h"
#include <stdlib.h>

Monster::Monster()
{
}

Monster::Monster(int health, int healthRange, double MinDamage, double MaxDamage)
{
    Health(health, healthRange);
    updateDamage(MinDamage, MaxDamage);
}

double Monster::Attack()
{
    //stuff goes here
}

void Monster::Health(int minHealth, int maxHealth)
{
    this->setHealth((rand() % (maxHealth-minHealth) + minHealth));
}
