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
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string _postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
};

#endif 