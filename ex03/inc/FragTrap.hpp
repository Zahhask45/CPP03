#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap& rhs);
	void highFivesGuys();

	static const int	frag_hp;
	static const int	frag_ep;
	static const int	frag_ad;
	
};


#endif
