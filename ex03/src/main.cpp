#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    DiamondTrap first("D-TP");

    cout << "VERIFY DIAMONDTRAP VALUES" << endl
         << "hp: " << first.getHp()
         << " (FragTrap:" << FragTrap::frag_hp
         << ", ScavTrap:" << ScavTrap::scav_hp << ")" << endl
         << "energy: " << first.getEnergy()
         << " (FragTrap:" << FragTrap::frag_ep
         << ", ScavTrap:" << ScavTrap::scav_ep << ")" << endl
         << "attackDmg: " << first.getAttackDmg()
         << " (FragTrap:" << FragTrap::frag_ad
         << ", ScavTrap:" << ScavTrap::scav_ad << ")" << endl
         << endl;

    cout << "--------------------------------------------------" << endl;

    cout << first.getName() << " has " << first.getEnergy() << endl;
    first.attack("Handsome Jack");
    first.whoAmI();

    cout << "--------------------------------------------------" << endl;

    DiamondTrap second(first);
    cout << second.getName() << " has " << second.getEnergy() << endl;
    second.attack("someone");
    second.whoAmI();

    cout << "--------------------------------------------------" << endl;

    cout << "Create ScavTrap from DiamondTrap" << endl;
    ScavTrap third(first); // NOLINT

    cout << "Create FragTrap from DiamondTrap" << endl;
    FragTrap fourth(first); // NOLINT

    cout << "Create ClapTrap from DiamondTrap" << endl;
    ClapTrap fifth(first); // NOLINT

    cout << "--------------------------------------------------" << endl;

    return 0;
}
