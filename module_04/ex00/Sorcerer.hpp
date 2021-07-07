#ifndef Sorcerer_HPP
 #define Sorcerer_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		Sorcerer();
		std::string		m_name;
		std::string		m_title;
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		virtual ~Sorcerer();

		Sorcerer & operator=(Sorcerer const & rhs);

		std::string		getName(void)	const;
		std::string		getTitle(void)	const;
		void			setName(const std::string name);
		void			setTitle(const std::string title);

		void 			polymorph(Victim const & victim) const;

};

std::ostream	&	operator<<(std::ostream & out, Sorcerer const & sorcerer);

#endif