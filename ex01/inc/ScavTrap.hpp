#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"



class ScavTrap: public ClapTrap {
protected:
	static const int	scav_hp;
	static const int	scav_ep;
	static const int	scav_ad;
public:
    ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap& rhs);
	void guardGate();
	void attack(const std::string& target);

	
};

#endif