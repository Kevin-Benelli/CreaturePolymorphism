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
    Elf::Elf()
    {


    }





    Elf::Elf(int newStrength, int  newHitpoints) : Creature:: Creature(newStrength, newHitpoints)
    {


    }






    int Elf::getDamage() const
    {
        int damage = Creature::getDamage();
        if (rand() % 100 < 50)
        {
            std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
            damage = damage * 2;
        }
        return damage;
    }






    std::string Elf::getSpecies() const
    {
        return "Elf";
    }


}