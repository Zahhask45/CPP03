#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    FragTrap first("FR4G-TP");

    FragTrap second(first);

    // OK because FragTrap has the ClapTrap part
    ClapTrap third(first);

    // NOT OK because third is missing the FragTrap part and
    // there are no constructers for type ClapTrap
    // FragTrap fourth(third);

    // NOT OK no constructer for this type
    // ScavTrap fourth(first);

    ScavTrap fifth;

    first.highFivesGuys();

    cout << "ClapTrap third has " << third.getEnergy()
         << " energy because was copied by a FrapTrap reference." << endl;

    fifth.attack(first.getName());
    first.takeDamage(100);
    return 0;
}
