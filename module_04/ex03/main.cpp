#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int         main(void)
{
	IMateriaSource* src2 = new MateriaSource();
	ICharacter *robert = new Character("robert");
    AMateria *cure;
    AMateria *ice;
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	ice = src2->createMateria("ice");
	cure = src2->createMateria("cure");
 	robert->equip(ice);
 	robert->equip(cure);
	ICharacter* roger = new Character("roger");
	std::cout << "ice xp :" << ice->getXP() << std::endl;
	std::cout << "cure xp :" << cure->getXP() << std::endl;
	robert->use(0, *roger);
	robert->use(1, *roger);
	robert->use(1, *roger);
	std::cout << "ice xp :" << ice->getXP() << std::endl;
	std::cout << "cure xp :" << cure->getXP() << std::endl;


	delete src2;
	delete robert;
	delete roger;
	return 0;
}