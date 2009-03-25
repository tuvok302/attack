#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
public:
    Weapon();
    Weapon(int, int, int);
private:
    int minDamage, maxDamage, hitPercentage;
};

#endif // WEAPON_H
