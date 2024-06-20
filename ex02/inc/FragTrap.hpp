#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
protected:
	static const int	frag_hp;
	static const int	frag_ep;
	static const int	frag_ad;
public:
    FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap& rhs);
	void highFivesGuys();

	
};


#endif