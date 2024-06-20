#include "FragTrap.hpp"

const int FragTrap::frag_hp = 100;
const int FragTrap::frag_ep = 100;
const int FragTrap::frag_ad = 30;

FragTrap::FragTrap() : ClapTrap("FR4G-TP")
{
    this->health_points = FragTrap::frag_hp;
    this->energy_points = FragTrap::frag_ep;
    this->attack_damage = FragTrap::frag_ad;
    std::cout << _CYAN << "[FragTrap Called from ClapTrap] goes by the name: " << this->name << _END << std::endl;
    std::cout << _CYAN << "Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP, Hyperion Robot, Class C. "
    << "Please adjust factory settings to meet your needs before deployment. " << _END << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->health_points = FragTrap::frag_hp;
    this->energy_points = FragTrap::frag_ep;
    this->attack_damage = FragTrap::frag_ad;
    std::cout << _CYAN << "[FragTrap Called from ClapTrap] goes by the name: " << this->name << _END << std::endl;
    std::cout << _CYAN << "Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP, Hyperion Robot, Class C. "
    << "Please adjust factory settings to meet your needs before deployment. " << _END << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _CYAN << "[FragTrap died] I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << _END << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << _CYAN << "[FragTrap copy constructor called]" << _END << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << _CYAN << "[FragTrap Assignment Operator]: rhs name is "
         << rhs.name << _END << std::endl;
	this->name = rhs.name;
	this->health_points = rhs.health_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << _CYAN << "Secret handshake!" << _END << std::endl;
}
