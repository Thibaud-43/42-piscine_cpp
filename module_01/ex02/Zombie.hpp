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
	~Zombie(void);

	std::string     	name;
	std::string     	type;
	std::string			getType(void);
	std::string			getName(void);
	void				setName(std::string name);
	void				setType(std::string type);
	void				announce(void);
	std::string	randomName(const int len);

private:

};

#endif 