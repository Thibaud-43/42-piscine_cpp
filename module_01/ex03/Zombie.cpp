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

std::string Zombie::randomName(int len)
{
   std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   std::string newstr;
   int pos;
   while(newstr.size() != len) {
    pos = ((rand() % (str.size() - 1)));
    newstr += str.substr(pos,1);
   }
   return newstr;
}