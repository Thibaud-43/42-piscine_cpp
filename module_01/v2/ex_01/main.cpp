#include "Zombie.hpp"

int main(void)
{
    Zombie* heap;
    Zombie* horde;
    heap = newZombie("heap");
    heap->announce();
    randomChump("stack");
    horde = zombieHorde(4, "horde");
    delete [] horde;
    delete heap;
    return (0);
}