#ifndef CREATURE_H
#define CREATURE_H

class Creature
{
public:
    Creature();
    void setHealth(int);
    virtual double Attack() = 0;
    virtual void updateDamage(int newMin, int newMax);

private:

protected:
    int minDamage, maxDamage;
    int health;
};

#endif // CREATURE_H

