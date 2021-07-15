#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "A cat is borned" << std::endl;
    
}

WrongCat::WrongCat(WrongCat const & src): WrongAnimal(src)
{
    std::cout << "A cat is borned" << std::endl;

}

WrongCat::~WrongCat()
{
    std::cout << "A cat is died" << std::endl;
    
}

WrongCat &   WrongCat::operator=(WrongCat const & rhs)
{
    if (&rhs == this)
        return *this;
    WrongAnimal::operator=(rhs);

    return *this;
}

void            WrongCat::makeSound(void) const
{
    std::cout << "Miaaaou" << std::endl;
}