#ifndef MONSTER_H
#define MONSTER_H

#include "creature.h"

class Monster : public Creature
{
public:
    Monster();
    Monster(int health, int healthRange, int minDamage, int maxDamage);
    double Attack();//Don't forget to update the sprite
    void Health(int minHealth, int maxHealth);
    ~Monster();
private:
protected:
};

#endif // MONSTER_H
