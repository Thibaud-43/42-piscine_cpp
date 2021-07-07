#ifndef Victim_HPP
 #define Victim_HPP

#include <iostream>
#include <string>

class Victim
{
	protected:
		Victim();
		std::string		m_name;
	public:
		Victim(std::string name);
		Victim(Victim const & src);
		virtual ~Victim();

		Victim & 		operator=(Victim const & rhs);

		std::string		getName(void)	const;
		void			setName(const std::string name);

		virtual void 			getPolymorphed(void) const;

};

std::ostream	&	operator<<(std::ostream & out, Victim const & sorcerer);

#endif