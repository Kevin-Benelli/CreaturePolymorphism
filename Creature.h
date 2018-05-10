//
// Created by Kevin Benelli on 3/9/18.
//

#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<string>

namespace cs_creature
{
    class Creature
    {
    private:
        int strength;           // how much damage this Creature inflicts
        int hitpoints;          // how much damage this Creature can sustain

    public:
        Creature();             // initialize to Human, 10 strength, 10 hitpoints
        Creature(int newStrength, int newHitpoints);
        virtual std::string getSpecies() const = 0;    // returns the type of the species
        virtual int getDamage() const;
        int getHitpoints() const;
        int getStrength() const;
        void setHitpoints(int newHitpoints);
        void setStrength(int newStrength);
        // returns the amount of damage this Creature
        // inflicts in one round of combat

        // also include appropriate accessors and mutators
    };
}

#endif //CREATURE_H
