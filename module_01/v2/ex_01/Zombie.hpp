#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <unistd.h>

class Zombie {
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	std::string			getType(void) const;
	std::string			getName(void) const;
	void				setName(std::string name);
	void				setType(std::string type);
	void				announce(void);
	static std::string 	randomName(int len);

private:
	std::string     	m_name;
	std::string     	m_type;
};

Zombie* 		newZombie(std::string name);
void 			randomChump(std::string name);
Zombie*			zombieHorde( int N, std::string name );

#endif 