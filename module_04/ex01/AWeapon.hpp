#ifndef AWeapon_HPP
 #define AWeapon_HPP

#include <iostream>
#include <string>

class AWeapon
{
	protected:
		std::string				m_name;
		int						m_damage;
		int						m_apCost;
	public:
		AWeapon(void);
		AWeapon(AWeapon const & src);
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();

		AWeapon	&	operator=(AWeapon const & rhs);

		std::string const	&	getName() const;
		int						getAPCost() const;
		int						getDamage() const;

		virtual void 			attack(void) const = 0;
};


#endif

