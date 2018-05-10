//
// Created by Kevin Benelli on 3/10/18.
//

#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"

namespace cs_creature
{
    class demon : public Creature
    {
    public:
        demon();
        demon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif //DEMON_H
