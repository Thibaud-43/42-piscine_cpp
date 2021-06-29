#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cctype>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void		display(void);
		void		displayDetails(void);
		void		init(int);
	private:
		int			m_index;
		std::string	m_firstName;
		std::string	m_lastName;
		std::string	m_nickname;
		std::string	m_phoneNumber;
		std::string	m_darkestSecret;
};

#endif 