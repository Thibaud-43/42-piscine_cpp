#include "Animal.hpp"

Animal::Animal(): m_type("")
{
    
}

Animal::Animal(Animal const & src): m_type(src.m_type)
{

}

Animal::Animal(std::string type): m_type(type)
{

}


Animal::~Animal()
{
    
}

Animal &   Animal::operator=(Animal const & rhs)
{
    if (&rhs == this)
        return *this;
    m_type = rhs.m_type;
    return *this;
}


std::string     Animal::getType(void) const
{
    return m_type;
}

void            Animal::makeSound(void) const
{
    std::cout << "";
}
