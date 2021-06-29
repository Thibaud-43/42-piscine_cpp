#include "Contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::display(void)
{
	std::cout << "|" << std::setw(10) << m_index;
	if (m_firstName.length() > 10)
		std::cout << "|" << m_firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << m_firstName;
	if (m_lastName.length() > 10)
		std::cout << "|" << m_lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << m_lastName;
	if (m_nickname.length() > 10)
		std::cout << "|" << m_nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << m_nickname;
	std::cout << "|" << std::endl;
}
void	Contact::displayDetails(void)
{
	std::cout << std::endl << "FIRST NAME : " << m_firstName << std::endl;

	std::cout << "LAST NAME : " << m_lastName << std::endl;

	std::cout << "NNICKNAME : " << m_nickname << std::endl;

	std::cout << "PHONE NUMBER : " << m_phoneNumber << std::endl;

	std::cout << "DARKEST SECRET : " << m_darkestSecret << std::endl << std::endl;
}


void	Contact::init(int index)
{
	m_index = index;
	std::cout << "Please fill the following informations carefully : " << std::endl;
	std::cout  << "FIRST NAME : >" ;
	std::getline(std::cin, m_firstName);

	std::cout << "LAST NAME : >" ;
	std::getline(std::cin, m_lastName);

	std::cout << "NNICKNAME : >" ;
	std::getline(std::cin, m_nickname);

	std::cout << "PHONE NUMBER : >" ;
	std::getline(std::cin, m_phoneNumber);

	std::cout << "DARKEST SECRET : >" ;
	std::getline(std::cin, m_darkestSecret);
}