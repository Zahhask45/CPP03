#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    ClapTrap mainboss("Original");
    ScavTrap first("GU4RD-TP");

    first.guardGate();
    first.attack(mainboss.getName());
    cout << first.getName() << " has " << first.getEnergy() << " energy"
         << endl;

    cout << "--------------------------------------------------" << endl;

    ScavTrap second = first;

    return 0;
}
