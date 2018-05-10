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
    Cyberdemon::Cyberdemon()
    {

    }





    std::string Cyberdemon::getSpecies() const
    {
        return "CyberDemon";
    }






    Cyberdemon::Cyberdemon(int newStrength, int newHitpoints) : demon(newStrength, newHitpoints)
    {

    }


}