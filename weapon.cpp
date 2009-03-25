#include "weapon.h"

Weapon::Weapon()
{
}

Weapon::Weapon(int maxDam, int minDam, int hitPer)
{
    maxDamage = maxDam;
    minDamage = minDam;
    hitPercentage = hitPer;
}

