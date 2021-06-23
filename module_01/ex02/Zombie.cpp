#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	
}

void    Zombie::announce(void)
{
	std::cout<< "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

std::string	Zombie::getType(void)
{
	return (this->type);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string  Zombie::randomName(const int len)
{
	std::string tmp_s;
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	srand( (unsigned) time(NULL) * getpid());

	tmp_s.reserve(len);

	for (int i = 0; i < len; ++i) 
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];


	return tmp_s;
}