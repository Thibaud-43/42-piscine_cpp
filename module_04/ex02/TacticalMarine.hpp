#ifndef TacticalMarine_HPP
 #define TacticalMarine_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine
{
	private:
		
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine();

		TacticalMarine  &   operator=(TacticalMarine const & rhs);

		ISpaceMarine *	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif