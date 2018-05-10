/* Kevin Benelli
 * CS 11
 * Dave Harden
 * 3/11/2018
*/

#include <iostream>
#include "Cyberdemon.h"
#include "Balrog.h"
#include "Human.h"
#include "Elf.h"
#include "Creature.h"
#include "demon.h"
#include <ctime>
#include <cstdlib>

using namespace cs_creature;

void battleArena(Creature &Creature1, Creature& Creature2, Creature& Creature3, Creature& Creature4);


void battleArena(Creature &Creature1, Creature& Creature2, Creature& Creature3, Creature& Creature4)
{

    std:: cout << "\n\tBalrog vs. Elf" << std:: endl;
    std:: cout << "\t--------------"<< std:: endl;
    int creatureHP1 = Creature1.getHitpoints();
    int creatureHP2 = Creature2.getHitpoints();
    std:: string cSpecies1 = Creature1.getSpecies();
    std:: string cSpecies2 = Creature2.getSpecies();


    std:: cout << "\n" << cSpecies1 << " starts with " << creatureHP1 << " hit points";
    std:: cout << "\n" << cSpecies2 << " starts with " << creatureHP2 << " hit points\n\n";



    while(creatureHP1 >= 0 && creatureHP2 >= 0)
    {

        int cDamage1 = Creature1.getDamage();
        int cDamage2 = Creature2.getDamage();

        creatureHP1 = creatureHP1 - cDamage2;
        creatureHP2  = creatureHP2 - cDamage1;

        std:: cout <<  cSpecies1 << " has " << creatureHP1 << "hp left!\n";
        std:: cout <<  cSpecies2 << " has " << creatureHP2 << "hp left!\n";


        if (creatureHP1 >= 0 && creatureHP2 >= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP1 <= 0 && creatureHP2 <= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP1 >= 0 && creatureHP2 <= 0)
        {
            std:: cout << cSpecies1 << " Won the Match!\n\n" << std:: endl;
        }
        else
        {
            std:: cout << cSpecies2 << " Won the Match!\n\n" << std:: endl;
        }
    }







    std:: cout << "\n\tCyberDemon vs. Human" << std:: endl;
    std:: cout << "\t---------------------"<< std:: endl;
    int creatureHP3 = Creature3.getHitpoints();
    int creatureHP4 = Creature4.getHitpoints();
    std:: string cSpecies3 = Creature3.getSpecies();
    std:: string cSpecies4 = Creature4.getSpecies();


    std:: cout << "\n" << cSpecies3 << " starts with " << creatureHP3 << " hit points";
    std:: cout << "\n" << cSpecies4 << " starts with " << creatureHP4 << " hit points\n\n";



    while(creatureHP3 >= 0 && creatureHP4 >= 0)
    {

        int cDamage3 = Creature3.getDamage();
        int cDamage4 = Creature4.getDamage();



        creatureHP3 = creatureHP3 - cDamage4;
        creatureHP4  = creatureHP4 - cDamage3;

        std:: cout <<  cSpecies3 << " has " << creatureHP3 << "hp left!\n";
        std:: cout <<  cSpecies4 << " has " << creatureHP4 << "hp left!\n";


        if (creatureHP3 >= 0 && creatureHP4 >= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP3 <= 0 && creatureHP4 <= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP3 >= 0 && creatureHP4 <= 0)
        {
            std:: cout << cSpecies3 << " Won the Match!\n\n" << std:: endl;
        }

        else
        {
            std:: cout << cSpecies4 << " Won the Match!\n\n" << std:: endl;
        }
    }







    std:: cout << "\n\tCyberdemon vs. Balrog" << std:: endl;
    std:: cout << "\t----------------------"<< std:: endl;
    creatureHP3 = Creature3.getHitpoints();
    creatureHP2 = Creature2.getHitpoints();


    std:: cout << "\n" << cSpecies3 << " starts with " << creatureHP3 << " hit points";
    std:: cout << "\n" << cSpecies2 << " starts with " << creatureHP2 << " hit points\n\n";



    while(creatureHP3 >= 0 && creatureHP2 >= 0)
    {

        int cDamage3 = Creature3.getDamage();
        int cDamage2 = Creature2.getDamage();



        creatureHP3 = creatureHP3 - cDamage2;
        creatureHP2  = creatureHP2 - cDamage3;

        std:: cout <<  cSpecies3 << " has " << creatureHP3 << "hp left!\n";
        std:: cout <<  cSpecies2 << " has " << creatureHP2 << "hp left!\n";


        if (creatureHP3 >= 0 && creatureHP2 >= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP3 <= 0 && creatureHP2 <= 0)
        {
            std:: cout << "The Match ended in a tie!\n" << std:: endl;
        }

        else if (creatureHP3 >= 0 && creatureHP2 <= 0)
        {
            std:: cout << cSpecies3 << " Won the Match!\n\n" << std:: endl;
        }

        else
        {
            std:: cout << cSpecies2 << " Won the Match!\n\n" << std:: endl;
        }
    }

}






int main()
    {
        srand((time(0)));

        Elf e(50, 500);
        Balrog b(27, 500);;
        Cyberdemon c(50, 500);
        Human h(50, 500);

        battleArena(e, b, c,h);
    }



/*

    Balrog vs. Elf
	--------------

Elf starts with 500 hit points
Balrog starts with 500 hit points

The Elf attacks for 21 points!
Magical attack inflicts 21 additional damage points!
The Balrog attacks for 25 points!
Balrog speed attack inflicts 24 additional damage points!
Elf has 451hp left!
Balrog has 458hp left!
The Match ended in a tie!

The Elf attacks for 16 points!
Magical attack inflicts 16 additional damage points!
The Balrog attacks for 3 points!
Balrog speed attack inflicts 1 additional damage points!
Elf has 447hp left!
Balrog has 426hp left!
The Match ended in a tie!

The Elf attacks for 18 points!
Magical attack inflicts 18 additional damage points!
The Balrog attacks for 19 points!
Balrog speed attack inflicts 18 additional damage points!
Elf has 410hp left!
Balrog has 390hp left!
The Match ended in a tie!

The Elf attacks for 4 points!
The Balrog attacks for 14 points!
Balrog speed attack inflicts 4 additional damage points!
Elf has 392hp left!
Balrog has 386hp left!
The Match ended in a tie!

The Elf attacks for 30 points!
Magical attack inflicts 30 additional damage points!
The Balrog attacks for 12 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 17 additional damage points!
Elf has 313hp left!
Balrog has 326hp left!
The Match ended in a tie!

The Elf attacks for 49 points!
Magical attack inflicts 49 additional damage points!
The Balrog attacks for 2 points!
Balrog speed attack inflicts 22 additional damage points!
Elf has 289hp left!
Balrog has 228hp left!
The Match ended in a tie!

The Elf attacks for 30 points!
The Balrog attacks for 21 points!
Balrog speed attack inflicts 6 additional damage points!
Elf has 262hp left!
Balrog has 198hp left!
The Match ended in a tie!

The Elf attacks for 27 points!
Magical attack inflicts 27 additional damage points!
The Balrog attacks for 15 points!
Balrog speed attack inflicts 24 additional damage points!
Elf has 223hp left!
Balrog has 144hp left!
The Match ended in a tie!

The Elf attacks for 34 points!
The Balrog attacks for 19 points!
Balrog speed attack inflicts 21 additional damage points!
Elf has 183hp left!
Balrog has 110hp left!
The Match ended in a tie!

The Elf attacks for 11 points!
The Balrog attacks for 23 points!
Balrog speed attack inflicts 21 additional damage points!
Elf has 139hp left!
Balrog has 99hp left!
The Match ended in a tie!

The Elf attacks for 49 points!
Magical attack inflicts 49 additional damage points!
The Balrog attacks for 11 points!
Balrog speed attack inflicts 15 additional damage points!
Elf has 113hp left!
Balrog has 1hp left!
The Match ended in a tie!

The Elf attacks for 43 points!
Magical attack inflicts 43 additional damage points!
The Balrog attacks for 24 points!
Balrog speed attack inflicts 18 additional damage points!
Elf has 71hp left!
Balrog has -85hp left!
Elf Won the Match!



	CyberDemon vs. Human
	---------------------

CyberDemon starts with 500 hit points
Human starts with 500 hit points

The CyberDemon attacks for 14 points!
The Human attacks for 43 points!
CyberDemon has 457hp left!
Human has 486hp left!
The Match ended in a tie!

The CyberDemon attacks for 12 points!
The Human attacks for 3 points!
CyberDemon has 454hp left!
Human has 474hp left!
The Match ended in a tie!

The CyberDemon attacks for 17 points!
The Human attacks for 25 points!
CyberDemon has 429hp left!
Human has 457hp left!
The Match ended in a tie!

The CyberDemon attacks for 45 points!
The Human attacks for 17 points!
CyberDemon has 412hp left!
Human has 412hp left!
The Match ended in a tie!

The CyberDemon attacks for 5 points!
The Human attacks for 30 points!
CyberDemon has 382hp left!
Human has 407hp left!
The Match ended in a tie!

The CyberDemon attacks for 37 points!
The Human attacks for 39 points!
CyberDemon has 343hp left!
Human has 370hp left!
The Match ended in a tie!

The CyberDemon attacks for 31 points!
The Human attacks for 47 points!
CyberDemon has 296hp left!
Human has 339hp left!
The Match ended in a tie!

The CyberDemon attacks for 18 points!
The Human attacks for 46 points!
CyberDemon has 250hp left!
Human has 321hp left!
The Match ended in a tie!

The CyberDemon attacks for 18 points!
The Human attacks for 45 points!
CyberDemon has 205hp left!
Human has 303hp left!
The Match ended in a tie!

The CyberDemon attacks for 19 points!
The Human attacks for 22 points!
CyberDemon has 183hp left!
Human has 284hp left!
The Match ended in a tie!

The CyberDemon attacks for 41 points!
The Human attacks for 20 points!
CyberDemon has 163hp left!
Human has 243hp left!
The Match ended in a tie!

The CyberDemon attacks for 14 points!
Demonic attack inflicts 50 additional damage points!
The Human attacks for 6 points!
CyberDemon has 157hp left!
Human has 179hp left!
The Match ended in a tie!

The CyberDemon attacks for 3 points!
Demonic attack inflicts 50 additional damage points!
The Human attacks for 6 points!
CyberDemon has 151hp left!
Human has 126hp left!
The Match ended in a tie!

The CyberDemon attacks for 3 points!
Demonic attack inflicts 50 additional damage points!
The Human attacks for 43 points!
CyberDemon has 108hp left!
Human has 73hp left!
The Match ended in a tie!

The CyberDemon attacks for 35 points!
The Human attacks for 22 points!
CyberDemon has 86hp left!
Human has 38hp left!
The Match ended in a tie!

The CyberDemon attacks for 7 points!
The Human attacks for 11 points!
CyberDemon has 75hp left!
Human has 31hp left!
The Match ended in a tie!

The CyberDemon attacks for 19 points!
The Human attacks for 11 points!
CyberDemon has 64hp left!
Human has 12hp left!
The Match ended in a tie!

The CyberDemon attacks for 35 points!
The Human attacks for 44 points!
CyberDemon has 20hp left!
Human has -23hp left!
CyberDemon Won the Match!



	Cyberdemon vs. Balrog
	----------------------

CyberDemon starts with 500 hit points
Balrog starts with 500 hit points

The CyberDemon attacks for 47 points!
The Balrog attacks for 27 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 11 additional damage points!
CyberDemon has 412hp left!
Balrog has 453hp left!
The Match ended in a tie!

The CyberDemon attacks for 23 points!
The Balrog attacks for 15 points!
Balrog speed attack inflicts 20 additional damage points!
CyberDemon has 377hp left!
Balrog has 430hp left!
The Match ended in a tie!

The CyberDemon attacks for 23 points!
Demonic attack inflicts 50 additional damage points!
The Balrog attacks for 24 points!
Balrog speed attack inflicts 2 additional damage points!
CyberDemon has 351hp left!
Balrog has 357hp left!
The Match ended in a tie!

The CyberDemon attacks for 40 points!
The Balrog attacks for 1 points!
Balrog speed attack inflicts 25 additional damage points!
CyberDemon has 325hp left!
Balrog has 317hp left!
The Match ended in a tie!

The CyberDemon attacks for 14 points!
Demonic attack inflicts 50 additional damage points!
The Balrog attacks for 3 points!
Balrog speed attack inflicts 21 additional damage points!
CyberDemon has 301hp left!
Balrog has 253hp left!
The Match ended in a tie!

The CyberDemon attacks for 8 points!
The Balrog attacks for 3 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 2 additional damage points!
CyberDemon has 246hp left!
Balrog has 245hp left!
The Match ended in a tie!

The CyberDemon attacks for 11 points!
The Balrog attacks for 27 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 3 additional damage points!
CyberDemon has 166hp left!
Balrog has 234hp left!
The Match ended in a tie!

The CyberDemon attacks for 4 points!
Demonic attack inflicts 50 additional damage points!
The Balrog attacks for 6 points!
Balrog speed attack inflicts 11 additional damage points!
CyberDemon has 149hp left!
Balrog has 180hp left!
The Match ended in a tie!

The CyberDemon attacks for 14 points!
The Balrog attacks for 5 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 8 additional damage points!
CyberDemon has 86hp left!
Balrog has 166hp left!
The Match ended in a tie!

The CyberDemon attacks for 7 points!
The Balrog attacks for 10 points!
Balrog speed attack inflicts 12 additional damage points!
CyberDemon has 64hp left!
Balrog has 159hp left!
The Match ended in a tie!

The CyberDemon attacks for 39 points!
The Balrog attacks for 24 points!
Balrog speed attack inflicts 21 additional damage points!
CyberDemon has 19hp left!
Balrog has 120hp left!
The Match ended in a tie!

The CyberDemon attacks for 11 points!
The Balrog attacks for 27 points!
Balrog speed attack inflicts 13 additional damage points!
CyberDemon has -21hp left!
Balrog has 109hp left!
Balrog Won the Match!

 */