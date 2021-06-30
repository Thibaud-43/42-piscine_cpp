#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <unistd.h>
#include <random>


class Zombie {
public:
	Zombie(void);
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

#endif 