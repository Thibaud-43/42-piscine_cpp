#ifndef SuperMutant_HPP
 #define SuperMutant_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	protected:

	public:
		SuperMutant();
		SuperMutant(SuperMutant const & src);
		virtual ~SuperMutant();

		SuperMutant	&	operator=(SuperMutant const & rhs);

		void 		takeDamage(int);
};

#endif