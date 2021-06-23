#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
	public:

		std::string	type;
		ZombieEvent(void);
		~ZombieEvent(void);
		Zombie				*randomChump(void);
		Zombie				*newZombie(std::string name);
		void				setZombieType(std::string type);

	private:
};

#endif 