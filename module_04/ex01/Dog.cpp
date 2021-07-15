#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), m_brain(new Brain())
{
    std::cout << "A dog is borned" << std::endl;
    
}

Dog::Dog(Dog const & src): Animal(src)
{
    std::cout << "A dog is borned" << std::endl;
    m_brain = new Brain();
    *m_brain = *(src.m_brain);
}

Dog::~Dog()
{
    std::cout << "A dog is died" << std::endl;
    delete m_brain;
}

Dog &   Dog::operator=(Dog const & rhs)
{
    if (&rhs == this)
        return *this;
    Animal::operator=(rhs);
    delete m_brain;
    m_brain = new Brain();
    *m_brain = *(rhs.m_brain);
    return *this;
}

void            Dog::makeSound(void) const
{
    std::cout << "Wouuaaaf" << std::endl;
}

Brain   *   Dog::getBrain(void) const
{
    return m_brain;
}
