#include "Zombie.hpp"

Zombie::Zombie(void)
{
   m_name = randomName(10);
}

Zombie::Zombie(std::string name): m_name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout<< "<" << m_name << "> died !" << std::endl;
}

void    Zombie::announce(void)
{
	std::cout<< "<" << m_name << "> BraiiiiiiinnnzzzZ.." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (m_name);
}

std::string	Zombie::getType(void) const
{
	return (m_type);
}

void	Zombie::setName(std::string name)
{
	m_name = name;
	return ;
}

void	Zombie::setType(std::string type)
{
	m_type = type;
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