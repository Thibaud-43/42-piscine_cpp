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


		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	login;
		std::string postalAddress;
		std::string	emailAddress;
		std::string	phoneNumber;
		std::string	birthdayDate;
		std::string	favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;

		void		display(void);
		void		displayDetails(void);
		int			index;
		void		init(int);



	private:


};

#endif 