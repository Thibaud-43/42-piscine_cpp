#ifndef PowerFist_HPP
 #define PowerFist_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	protected:
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist();

		PowerFist	&	operator=(PowerFist const & rhs);

		void 			attack() const;
};


#endif

