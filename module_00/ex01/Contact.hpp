#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

class Contact {
	public:

		Contact(void);
		~Contact(void);
		std::string	firstName;
		std::string	lastName;
		void	init(void);



	private:


};

#endif 