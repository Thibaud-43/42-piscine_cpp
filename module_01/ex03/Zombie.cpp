#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	
}

void    Zombie::announce(void)
{
	std::cout<< "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (_name);
}

std::string	Zombie::getType(void)
{
	return (_type);
}

void	Zombie::setName(std::string name)
{
	_name = name;
	return ;
}

void	Zombie::setType(std::string type)
{
	_type = type;
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