#ifndef ScavTrap_HPP
 #define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);

};

#endif