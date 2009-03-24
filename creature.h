#ifndef CREATURE_H
#define CREATURE_H

class Creature
{
public:
    Creature();
    void setHealth(int);
    virtual double Attack() = 0;
    virtual void updateDamage(double newMin, double newMax);

private:
    int health;
    double minDamage, maxDamage;
};

#endif // CREATURE_H

