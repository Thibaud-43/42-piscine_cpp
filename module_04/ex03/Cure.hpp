#ifndef Cure_HPP
 #define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const & src);
		~Cure();
		Cure	&	operator=(Cure const & src);

		AMateria* 	    clone() const;
		void 			use(ICharacter& target);
	};

#endif