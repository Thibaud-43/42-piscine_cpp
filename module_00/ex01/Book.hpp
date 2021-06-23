#ifndef BOOK_HPP
# define Book_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include "Contact.hpp"


class Book {
public:
	Contact	contact[8];
	Book(void);
	~Book(void);
	void		addContact(void);
	static int	getNbcontact(void);
	void		searchContact(void);


private:
	static int	_nbContact;

};

#endif 