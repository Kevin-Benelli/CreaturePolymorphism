//
// Created by Kevin Benelli on 3/10/18.
//

#include "Cyberdemon.h"
#include "Balrog.h"
#include "Human.h"
#include "Elf.h"
#include "Creature.h"
#include "demon.h"

namespace cs_creature
{
    demon::demon()
    {

    }

    demon::demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
    {

    }


    std::string demon:: getSpecies() const
    {
        return "Demon";
    }


    int demon::getDamage() const
    {
        int damage = Creature::getDamage();
        if (rand() % 100 < 25) {
            damage = damage + 50;
           std:: cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
        }
        return damage;
    }



}
