//
// Created by Kevin Benelli on 3/9/18.
//

#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include<iostream>
#include "demon.h"

namespace cs_creature
{
    class Cyberdemon : public demon
    {
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHitpoints);
        std::string getSpecies() const;
    };
}

#endif //CYBERDEMON_H
