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
    Human::Human()
    {

    }





    Human::Human(int newStrength, int newHitpoints) : Creature:: Creature(newStrength, newHitpoints)
    {


    }





    std::string Human::getSpecies() const
    {
        return "Human";
    }

}
