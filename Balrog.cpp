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


namespace cs_creature {


    Balrog::Balrog()
    {


    }

    Balrog::Balrog(int newStrength, int newHitpoints) : demon(newStrength, newHitpoints)
    {


    }


    std::string Balrog:: getSpecies()  const
    {
        return "Balrog";
    }



     int Balrog::getDamage() const
    {
        int damage = demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        std::cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" <<std::endl;
        return damage + damage2;
    }

}