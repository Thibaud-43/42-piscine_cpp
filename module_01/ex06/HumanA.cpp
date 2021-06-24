#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void    HumanA::setType(std::string type)
{
    _weapon.setType(type);
}