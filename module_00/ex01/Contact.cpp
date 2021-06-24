#include "Contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::display(void)
{
	std::cout << "|" << std::setw(10) << _index;
	if (_firstName.length() > 10)
		std::cout << "|" << _firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _firstName;
	if (_lastName.length() > 10)
		std::cout << "|" << _lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _lastName;
	if (_nickname.length() > 10)
		std::cout << "|" << _nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << _nickname;
	std::cout << "|" << std::endl;
}
void	Contact::displayDetails(void)
{
	std::cout << std::endl << "FIRST NAME : " << _firstName << std::endl;

	std::cout << "LAST NAME : " << _lastName << std::endl;

	std::cout << "NNICKNAME : " << _nickname << std::endl;

	std::cout << "LOGIN : " << _login << std::endl;

	std::cout << "POSTAL ADDRESS : " << _postalAddress << std::endl;

	std::cout << "EMAIL ADDRESS : " << _emailAddress << std::endl;

	std::cout << "PHONE NUMBER : " << _phoneNumber << std::endl;

	std::cout << "BIRTHDAY DATE : " << _birthdayDate << std::endl;

	std::cout << "FAVORITE MEAL : " << _favoriteMeal << std::endl;

	std::cout << "UNDERWEAR COLOR : " << _underwearColor << std::endl;

	std::cout << "DARKEST SECRET : " << _darkestSecret << std::endl << std::endl;
}


void	Contact::init(int index)
{
	_index = index;
	std::cout << "Please fill the following informations carefully : " << std::endl;
	std::cout  << "FIRST NAME : >" ;
	std::getline(std::cin, _firstName);

	std::cout << "LAST NAME : >" ;
	std::getline(std::cin, _lastName);

	std::cout << "NNICKNAME : >" ;
	std::getline(std::cin, _nickname);

	std::cout << "LOGIN : >" ;
	std::getline(std::cin, _login);

	std::cout << "POSTAL ADDRESS : >" ;
	std::getline(std::cin, _postalAddress);

	std::cout << "EMAIL ADDRESS : >" ;
	std::getline(std::cin, _emailAddress);

	std::cout << "PHONE NUMBER : >" ;
	std::getline(std::cin, _phoneNumber);

	std::cout << "BIRTHDAY DATE : >" ;
	std::getline(std::cin, _birthdayDate);

	std::cout << "FAVORITE MEAL : >" ;
	std::getline(std::cin, _favoriteMeal);

	std::cout << "UNDERWEAR COLOR : >" ;
	std::getline(std::cin, _underwearColor);

	std::cout << "DARKEST SECRET : >" ;
	std::getline(std::cin, _darkestSecret);
}