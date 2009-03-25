#ifndef PLAYER_H
#define PLAYER_H

#include "creature.h"
#include "weapon.h"

class Player : public Creature
{
public:
    Player();
    Player(int Health);
    Weapon Sword();//Don't forget to fill in the function call and add otehr weapons
};

#endif // PLAYER_H
