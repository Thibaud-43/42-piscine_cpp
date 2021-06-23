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
		(this->contact[_nbContact]).init(_nbContact);
		_nbContact += 1;
	}
}

void	Book::searchContact(void)
{
	std::string indexStr;
	int			indexInt;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0 ; i < 8 ; i++)
	{
		if (i < _nbContact)
			this->contact[i].display();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Which contact do you want to display ? (ID)" << std::endl;
	std::cin >>	indexStr;
	indexInt = stoi(indexStr);
	if (indexInt >=0 && indexInt < _nbContact)
		this->contact[indexInt].displayDetails();
	else
		std::cout << "Sorry, this index doesn't exist." << std::endl;
}

int	Book::getNbcontact(void)
{
	return Book::_nbContact;
}

int	Book::_nbContact = 0;
