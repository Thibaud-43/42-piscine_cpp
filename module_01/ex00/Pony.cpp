#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout<< "A pony is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout<< "A pony is died" << std::endl;
}

void    Pony::run(void)
{
	std::cout<< "Pony is running !!!" << std::endl;
}