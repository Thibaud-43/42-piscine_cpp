#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    
}

Cat::Cat(Cat const & src): Animal(src)
{

}

Cat::~Cat()
{
    
}

Cat &   Cat::operator=(Cat const & rhs)
{
    if (&rhs == this)
        return *this;
    Animal::operator=(rhs);
    return *this;
}

void            Cat::makeSound(void) const
{
    std::cout << "Miaaaou" << std::endl;
}