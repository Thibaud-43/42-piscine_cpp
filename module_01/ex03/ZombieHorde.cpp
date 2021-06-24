#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _size(n)
{
    _horde = new Zombie[_size];
    for (int i = 0; i < _size ; i++)
    {
        _horde[i].setName(Zombie::randomName(10));
        _horde[i].setType("Chemical");
    }
}

ZombieHorde::~ZombieHorde(void)
{
	kill();
}

void    ZombieHorde::kill(void)
{
	delete [] _horde;
}

void    ZombieHorde::announce(void)
{
	for (int i = 0; i < _size ; i++)
        _horde[i].announce();
}
