#include "ScavTrap.hpp"

const int ScavTrap::scav_hp = 100;
const int ScavTrap::scav_ep = 50;
const int ScavTrap::scav_ad = 20;

ScavTrap::ScavTrap() : ClapTrap("SC4V-TP")
{
    this->health_points = ScavTrap::scav_hp;
    this->energy_points = ScavTrap::scav_ep;
    this->attack_damage = ScavTrap::scav_ad;
    std::cout << _BLUE << "[ScavTrap Called from ClapTrap] goes by the name: " << this->name << _END << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->health_points = ScavTrap::scav_hp;
    this->energy_points = ScavTrap::scav_ep;
    this->attack_damage = ScavTrap::scav_ad;
    std::cout << _BLUE << "[ScavTrap Called from ClapTrap] goes by the name: " << this->name << _END << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _BLUE << "[ScavTrap died] doing is job: " << this->name << _END << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << _BLUE << "[ScavTrap copy constructor called]" << _END << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << _BLUE << "[ScavTrap Assignment Operator]: rhs name is "
         << rhs.name << _END << std::endl;
	this->name = rhs.name;
	this->health_points = rhs.health_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_points == 0)
	{
		std::cout << _BLUE << "[ScavTrap is taking a nap]" << _END << std::endl;
		return ;
	}
	std::cout << _BLUE << "[ScavTrap " << this->name << "] roasts you "
				<< target << ", causing " << this->attack_damage
				<<  " points of emotional damage!" << _END << std::endl;
	this->energy_points -= 1;
	
}

void ScavTrap::guardGate()
{
    std::cout << std::endl << _BLUE << "[SC4V-TP]: Halt, moon citizen! I've been chosen to stand out here - "
    << "far, far away from everyone else - to guard the main gate to the old communications facility. "
    << "It's a VERY important duty, as I'm not to let ANYONE in through here! "
    << "Unless, of course, you're here as fresh meat for the recruitment grinder!" << _END << std::endl << std::endl;
}
