#include "Animal.hpp"

Animal::Animal(): m_type("")
{
    std::cout << "An animal is borned" << std::endl;
    
}

Animal::Animal(Animal const & src): m_type(src.m_type)
{
    std::cout << "An animal is borned" << std::endl;

}

Animal::Animal(std::string type): m_type(type)
{
    std::cout << "An animal is borned" << std::endl;

}


Animal::~Animal()
{
    std::cout << "An animal is died" << std::endl;
    
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
