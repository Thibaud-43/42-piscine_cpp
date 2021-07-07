#ifndef PlasmaRifle_HPP
 #define PlasmaRifle_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	protected:
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle();

		PlasmaRifle	&	operator=(PlasmaRifle const & rhs);

		void 			attack() const;
};


#endif

