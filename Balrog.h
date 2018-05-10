//
// Created by Kevin Benelli on 3/9/18.
//

#ifndef BALROG_H
#define BALROG_H
#include<iostream>
#include "demon.h"

namespace cs_creature
{
    class Balrog : public demon
    {
    public:

        Balrog();

        Balrog(int newStrength, int newHitpoints);
        int getDamage() const;
        std::string getSpecies() const;

    };
}
#endif //BALROG_H
