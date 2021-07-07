#ifndef DIAMOUNDTRAP_HPP
 #define DIAMOUNDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string m_name;
    public:
        DiamondTrap(void);
        DiamondTrap(DiamondTrap const & src);
        DiamondTrap(std::string name);
        virtual ~DiamondTrap(void);

        DiamondTrap &   operator=(DiamondTrap const & src);

        std::string	getName(void) const;
	    void		setName(const std::string name);

        void        whoAmI(void);

};

#endif