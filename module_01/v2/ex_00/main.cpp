#include "Zombie.hpp"

int main(void)
{
    Zombie* heap;
    heap = newZombie("heap");
    heap->announce();
    randomChump("stack");
    delete heap;
    return (0);
}