#include "Contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::display(void)
{
	std::cout << "|" << std::setw(10) << this->index;
	if (this->firstName.length() > 10)
		std::cout << "|" << this->firstName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->firstName;
	if (this->lastName.length() > 10)
		std::cout << "|" << this->lastName.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->lastName;
	if (this->nickname.length() > 10)
		std::cout << "|" << this->nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
}
void	Contact::displayDetails(void)
{
	std::cout << std::endl << "FIRST NAME : " << this->firstName << std::endl;

	std::cout << "LAST NAME : " << this->lastName << std::endl;

	std::cout << "NNICKNAME : " << this->nickname << std::endl;

	std::cout << "LOGIN : " << this->login << std::endl;

	std::cout << "POSTAL ADDRESS : " << this->postalAddress << std::endl;

	std::cout << "EMAIL ADDRESS : " << this->emailAddress << std::endl;

	std::cout << "PHONE NUMBER : " << this->phoneNumber << std::endl;

	std::cout << "BIRTHDAY DATE : " << this->birthdayDate << std::endl;

	std::cout << "FAVORITE MEAL : " << this->favoriteMeal << std::endl;

	std::cout << "UNDERWEAR COLOR : " << this->underwearColor << std::endl;

	std::cout << "DARKEST SECRET : " << this->darkestSecret << std::endl << std::endl;
}


void	Contact::init(int index)
{
	this->index = index;
	std::cout << "Please fill the following informations carefully : ";
	std::cout << std::endl << "FIRST NAME : >" ;
	std::cin >>	this->firstName;

	std::cout << "LAST NAME : >" ;
	std::cin >>	this->lastName;

	std::cout << "NNICKNAME : >" ;
	std::cin >>	this->nickname;

	std::cout << "LOGIN : >" ;
	std::cin >>	this->login;

	std::cout << "POSTAL ADDRESS : >" ;
	std::cin >>	this->postalAddress;

	std::cout << "EMAIL ADDRESS : >" ;
	std::cin >>	this->emailAddress;

	std::cout << "PHONE NUMBER : >" ;
	std::cin >>	this->phoneNumber;

	std::cout << "BIRTHDAY DATE : >" ;
	std::cin >>	this->birthdayDate;

	std::cout << "FAVORITE MEAL : >" ;
	std::cin >>	this->favoriteMeal;

	std::cout << "UNDERWEAR COLOR : >" ;
	std::cin >>	this->underwearColor;

	std::cout << "DARKEST SECRET : >" ;
	std::cin >>	this->darkestSecret;
}