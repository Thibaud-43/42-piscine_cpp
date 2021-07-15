#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    
}

Dog::Dog(Dog const & src): Animal(src)
{

}

Dog::~Dog()
{
    
}

Dog &   Dog::operator=(Dog const & rhs)
{
    if (&rhs == this)
        return *this;
    Animal::operator=(rhs);
    return *this;
}

void            Dog::makeSound(void) const
{
    std::cout << "Wouuaaaf" << std::endl;
}
