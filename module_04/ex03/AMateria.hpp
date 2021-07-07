#ifndef AMateria_HPP
 #define AMateria_HPP

class AMateria;
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
	protected:
		std::string		m_type;
		unsigned int 	m_xp;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		~AMateria();
		AMateria	&	operator=(AMateria const & src);


		std::string const & getType() const; //Returns the materia type
		unsigned int 		getXP() const; //Returns the Materia's XP
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
	};

#endif