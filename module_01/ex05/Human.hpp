#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	Human(void);
	~Human(void);
	const Brain	&getBrain(void) const;
	std::string identify(void) const;
private:
	const Brain	_brain;
};

#endif 