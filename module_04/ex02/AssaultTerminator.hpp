#ifndef AssaultTerminator_HPP
 #define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
	private:
		
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator();

		AssaultTerminator  &   operator=(AssaultTerminator const & rhs);

		ISpaceMarine *	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif