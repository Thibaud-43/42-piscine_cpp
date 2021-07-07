#ifndef Character_HPP
 #define Character_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <string>
#include <iostream>

class Character
{
	private:
		std::string			m_name;
		int					m_AP;
		AWeapon				*m_weapon;
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & src);
		virtual ~Character();

		Character	&		operator=(Character const & src);

		std::string const 	&getName(void) const;
		int 				getAP(void) const;
		AWeapon 			*getWeapon(void) const;

		void 				recoverAP();
		void 				equip(AWeapon*);
		void 				attack(Enemy*);

};

std::ostream &operator<<(std::ostream &out, Character const &chara);

#endif