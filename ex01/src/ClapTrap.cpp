#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name("CL4P-TP"), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout << _YELLOW << "[ClapTrap named: " << this->name << " created]" << _END << std::endl;

}

ClapTrap::ClapTrap(std::string name) : name(name), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout << _YELLOW << "[ClapTrap named: " << this->name << " created]" << _END << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << _YELLOW << "[ClapTrap copy constructor called]" << _END << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _YELLOW << "[ClapTrap named: " << this->name << " destroyed] For you...I commit...seddoku..." << _END << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << _YELLOW << "[ClapTrap Assignment Operator]: rhs name is "
         << rhs.name << _END << std::endl;
	this->name = rhs.name;
	this->health_points = rhs.health_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy_points == 0)
	{
		std::cout << _YELLOW << "[ClapTrap can't do anyhing. It has 0 points of energy]" << _END << std::endl;
		return ;
	}
	std::cout << _YELLOW << "[ClapTrap " << this->name << "] attacks "
				<< target << ", causing " << this->attack_damage
				<<  " points of damage!" << _END << std::endl;
	this->energy_points -= 1;
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health_points <= 0)
	{
		std::cout << _YELLOW << "The robot is dead, long live the robot!" << _END << std::endl;
		return ;
	}
	std::cout << _YELLOW << "[ClapTrap " << this->name << "] takes "
				<< amount << " of damage!" << _END << std::endl;
	if (amount >= this->health_points){
		this->health_points = 0;
		std::cout << _YELLOW << "[ClapTrap as died] Don't forget me!" << _END << std::endl;
	}
	else
		this->health_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0)
	{
		std::cout << _YELLOW << "[ClapTrap can't do anyhing. It has 0 points of energy]" << _END << std::endl;
		return ;
	}
	std::cout << _YELLOW << "[ClapTrap " << this->name << "] is self-repairing with "
				<< amount << " of health!" << _END << std::endl;
	this->energy_points--;
	this->health_points += amount;
}

std::string ClapTrap::getName(){
	return this->name;
}

int ClapTrap::getEnergy(){
	return this->energy_points;
}


int ClapTrap::getHp(){
	return this->health_points;
}

void ClapTrap::setEnergy(int new_energy){
	this->energy_points = new_energy;
}