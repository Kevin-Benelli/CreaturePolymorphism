//
// Created by Kevin Benelli on 3/9/18.
//

#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Creature.h"
namespace cs_creature
{
    class Human : public Creature
    {
    public:
        Human();
        Human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}

#endif //HUMAN_H
