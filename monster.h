#ifndef MONSTER_H
#define MONSTER_H

#include "creature.h"

class Monster : public Creature
{
public:
    Monster();
    Monster(int health, int healthRange, double minDamage, double maxDamage);
    double Attack();//Don't forget to update the sprite
    //void updateDamage(double newMin, double newMax);
    void Health(int minHealth, int maxHealth);
private:

};

#endif // MONSTER_H
