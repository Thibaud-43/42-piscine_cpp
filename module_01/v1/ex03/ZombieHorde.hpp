#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void    announce(void);
		void    kill(void);

	private:
		Zombie	*m_horde;
		int		m_size;
};

#endif 