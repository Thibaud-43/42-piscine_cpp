#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent  chemical;
    ZombieEvent  magic;
    chemical.setZombieType("chemical");
    magic.setZombieType("magic");
    Zombie *zomb = chemical.randomChump();
    Zombie *albert = chemical.newZombie("Albert");
    Zombie *bob = magic.newZombie("Bob");
    delete zomb;
    delete albert;
    delete bob;
    return (0);
}