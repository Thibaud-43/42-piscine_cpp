#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): size(n)
{
    this->horde = new Zombie[this->size];
    for (int i = 0; i < this->size ; i++)
    {
        this->horde[i].setName(Zombie::randomName(10));
        this->horde[i].setType("Chemical");
    }
}

ZombieHorde::~ZombieHorde(void)
{
	this->kill();
}

void    ZombieHorde::kill(void)
{
	delete [] this->horde;
}

void    ZombieHorde::announce(void)
{
	for (int i = 0; i < this->size ; i++)
        this->horde[i].announce();
}
