//
// Created by Kevin Benelli on 3/9/18.
//

#include <iostream>
#include "Cyberdemon.h"
#include "Balrog.h"
#include "Human.h"
#include "Elf.h"
#include "Creature.h"
#include "demon.h"


namespace cs_creature
{
    Creature::Creature()
    {
        strength = 10;
        hitpoints = 10;
    }





    Creature::Creature(int newStrength, int newHitpoints)
    {

        strength = newStrength;
        hitpoints = newHitpoints;

    }






   int Creature::getDamage() const
    {
        int damage;
        damage = (rand() % strength) + 1;
        std::cout << "The " << getSpecies() << " attacks for " << damage << " points!" << std::endl;
        return damage;
    }






    int Creature::getHitpoints() const
    {
        return hitpoints;
    }







    int Creature::getStrength() const
    {
        return strength;
    }







    void Creature::setHitpoints(int newHitpoints)
    {
        hitpoints = newHitpoints;
    }







    void Creature::setStrength(int newStrength)
    {
        strength = newStrength;
    }
}

