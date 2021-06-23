#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{

}

ZombieEvent::~ZombieEvent(void)
{
	
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie*   ZombieEvent::newZombie(std::string name)
{
    Zombie*  zomb = new Zombie;
    zomb->setName(name);
    zomb->setType(this->type);
    zomb->announce();

    return (zomb);
}

Zombie*   ZombieEvent::randomChump(void)
{
    Zombie*  zomb = new Zombie;
    zomb->setName(Zombie::randomName(10));
    zomb->setType(this->type);
    zomb->announce();

    return (zomb);
}
