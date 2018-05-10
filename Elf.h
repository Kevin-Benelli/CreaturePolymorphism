//
// Created by Kevin Benelli on 3/9/18.
//

#ifndef ELVES_H
#define ELVES_H
#include<iostream>
#include "Creature.h"


namespace cs_creature
{
    class Elf : public Creature
    {
    public:
        Elf();
        Elf(int newStrength, int newHitpoints);
        int getDamage() const;
        std::string getSpecies() const;
    };
}

#endif //ELVES_H
