#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public:

		Zombie	*horde;
		int		size;
		ZombieHorde(int n);
		~ZombieHorde(void);
		void    announce(void);
		void    kill(void);

	private:
};

#endif 