#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    ClapTrap first;
    ClapTrap second("SL4CK-TP");

    ClapTrap third = second;
    cout << "ClapTrap c name: " << third.getName()
         << ", Claptrap b name:" << second.getName() << endl;

    cout << "--------------------------------------------------" << endl;

    first.attack("Handsome Jack");
    first.attack(second.getName());
    cout << first.getName() << " has " << first.getEnergy() << " energy left"
         << endl;

    first.setEnergy(0);
    first.attack("Handsome Jack"); // out of energy
    cout << first.getName() << " has " << first.getEnergy() << " energy left"
         << endl;

    cout << "--------------------------------------------------" << endl;

    first.takeDamage(4);  // NOLINT
    first.takeDamage(10); // dies here // NOLINT
    first.takeDamage(10); // will not print because its dead // NOLINT
    first.takeDamage(10); // will not print because its dead // NOLINT
    cout << first.getName() << " hp is " << first.getHp() << endl;

    first.beRepaired(24); // NOLINT
    cout << first.getName() << " hp is " << first.getHp() << endl;

    cout << "--------------------------------------------------" << endl;

    third = first;
    cout << third.getName() << " hp is " << third.getHp() << endl;
    third.takeDamage(4); // will not print because he's dead // NOLINT

    cout << "--------------------------------------------------" << endl;

    return 0;
}
