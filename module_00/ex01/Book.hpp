#ifndef BOOK_HPP
# define BOOK_HPP

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <sstream>
#include "Contact.hpp"


class Book {
public:
	Book(void);
	virtual ~Book(void);

	void		addContact(void);
	static int	getNbcontact(void);
	void		searchContact(void);

private:
	Contact		m_contact[8];
	static int	_nbContact;

};

#endif 