#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), m_brain(new Brain())
{
    std::cout << "A cat is borned" << std::endl;
    
}

Cat::Cat(Cat const & src): Animal(src), m_brain(new Brain)
{
    std::cout << "A cat is borned" << std::endl;
    *m_brain = *src.m_brain;
}

Cat::~Cat()
{
    std::cout << "A cat is died" << std::endl;
    delete m_brain;
}

Cat &   Cat::operator=(Cat const & rhs)
{
    if (&rhs == this)
        return *this;
    Animal::operator=(rhs);
    m_brain = rhs.m_brain;

    return *this;
}

void            Cat::makeSound(void) const
{
    std::cout << "Miaaaou" << std::endl;
}