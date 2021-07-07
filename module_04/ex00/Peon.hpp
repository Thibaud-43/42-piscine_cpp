#ifndef Peon_HPP
 #define Peon_HPP

#include "Victim.hpp"


class Peon : public Victim
{
	private:
		Peon();
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		virtual ~Peon();

		Peon & 		operator=(Peon const & rhs);

		void 		getPolymorphed(void) const;

};


#endif