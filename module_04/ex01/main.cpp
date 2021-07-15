#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] =  new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "DEEP COPY :" << std:: endl;
	Dog	a;
	Dog b;

	b = a;
	std::cout << "ADDRESS OF A BRAIN :" << (a.getBrain()) << std:: endl;
	std::cout << "ADDRESS OF B BRAIN :" << (b.getBrain()) << std:: endl;

}
