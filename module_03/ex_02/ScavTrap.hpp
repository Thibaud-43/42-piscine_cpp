#ifndef ScavTrap_HPP
 #define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        
    public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
        ScavTrap(std::string name);
        virtual ~ScavTrap(void);
        
		ScavTrap	&	operator=(ScavTrap const & rhs);

        void            guardGate(void);

};

#endif