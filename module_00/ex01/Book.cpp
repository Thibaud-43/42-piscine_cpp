#include "Book.hpp"

Book::Book(void)
{

}

Book::~Book(void)
{
	std::cout<< "destructor" << std::endl;
}

void	Book::addContact(void)
{
	if (_nbContact == 8)
		std::cout<< "The book is full" << std::endl;
	else
	{
		(this->contact[_nbContact]).init();
		_nbContact += 1;
	}

}

int	Book::getNbcontact(void)
{
	return Book::_nbContact;
}

int	Book::_nbContact = 0;
