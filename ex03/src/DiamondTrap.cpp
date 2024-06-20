#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DI4MOND-TP_clap_name"), name("DI4MOND-TP"){
    this->health_points = FragTrap::frag_hp;
    this->energy_points = ScavTrap::scav_ep;
    this->attack_damage = FragTrap::frag_ad;
    std::cout << _WHITE << "[DiamondTrap Called from the Scav and Frag] goes by the name: " << this->name << _END << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->health_points = FragTrap::frag_hp;
    this->energy_points = ScavTrap::scav_ep;
    this->attack_damage = FragTrap::frag_ad;
    std::cout << _WHITE << "[DiamondTrap Called from ClapTrap] goes by the name: " << this->name << _END << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << _WHITE << "[DiamondTrap died] Go on without me!" << _END << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << _WHITE << "[DiamondTrap copy constructor called]" << _END << std::endl;
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << _WHITE << "[DiamondTrap Assignment Operator]: rhs name is "
         << rhs.name << _END << std::endl;
	this->name = rhs.name;
	this->health_points = rhs.health_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

void DiamondTrap::whoAmI(){
    std::cout << _WHITE << "Allow me to introduce myself - I am a " << this->name << " steward bot, but my friends call me " << this->getName() << _END << std::endl;
}
