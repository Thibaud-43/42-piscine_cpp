#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): m_size(n)
{
    m_horde = new Zombie[m_size];
    for (int i = 0; i < m_size ; i++)
    {
        m_horde[i].setName(Zombie::randomName(10));
        m_horde[i].setType("Chemical");
    }
}

ZombieHorde::~ZombieHorde(void)
{
	kill();
}

void    ZombieHorde::kill(void)
{
	delete [] m_horde;
}

void    ZombieHorde::announce(void)
{
	for (int i = 0; i < m_size ; i++)
        m_horde[i].announce();
}
