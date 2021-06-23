#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde horde = ZombieHorde(10);
    horde.announce();
    return (0);
}