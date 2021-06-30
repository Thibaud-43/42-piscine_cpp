#include "Book.hpp"

Book::Book(void)
{

}

Book::~Book(void)
{

}

void	Book::addContact(void)
{
	(m_contact[(_nbContact % 8)]).init(_nbContact % 8);
	_nbContact += 1;
}

void	Book::searchContact(void)
{
	std::string			indexStr;
	int					indexInt;
	std::stringstream	ss;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0 ; i < 8 ; i++)
	{
		if (i < _nbContact)
			m_contact[i].display();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Which contact do you want to display ? (ID)" << std::endl;
	std::getline(std::cin, indexStr);
	ss << indexStr;
	ss >> indexInt;
	indexInt = stoi(indexStr);
	if (indexInt >=0 && indexInt < _nbContact)
		m_contact[indexInt].displayDetails();
	else
		std::cout << "Sorry, this index doesn't exist." << std::endl;
}

int	Book::getNbcontact(void)
{
	return _nbContact;
}

int	Book::_nbContact = 0;
