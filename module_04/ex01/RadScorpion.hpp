#ifndef RadScorpion_HPP
 #define RadScorpion_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	protected:

	public:
		RadScorpion();
		RadScorpion(RadScorpion const & src);
		virtual ~RadScorpion();

		RadScorpion	&	operator=(RadScorpion const & rhs);

		void 		takeDamage(int);
};

#endif