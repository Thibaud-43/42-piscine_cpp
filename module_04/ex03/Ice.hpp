#ifndef Ice_HPP
 #define Ice_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & src);
		~Ice();
		Ice	&	operator=(Ice const & src);

		AMateria* 	    clone() const;
		void 			use(ICharacter& target);
	};

#endif