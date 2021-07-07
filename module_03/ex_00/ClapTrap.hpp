#ifndef ClapTrap_H
 #define ClapTrap_H

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	m_name;
	int			m_hitPoints;
	int			m_energyPoints;
	int			m_attackDammage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap();

	ClapTrap	&	operator=(ClapTrap const & rhs);

	void 		attack(std::string const & target);
	void 		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	std::string	getName(void) const;
	void		setName(const std::string name);
	int			getHitPoints(void) const;
	void		setHitPoints(const int hitPoints);
	int			getEnergyPoints(void) const;
	void		setEnergyPoints(const int energyPoints);
	int			getAttackDammage(void) const;
	void		setAttackDammage(const int attackDammage);
};




#endif