#include "contact.h"
#include "phonebook.h"

int	Contact::count = -1;

Contact::Contact(void)
{
	Contact::count++;
	this->id = Contact::count;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->secret = "";
}

Contact::~Contact(void)
{
}

int	Contact::get_count(void)
{
	return count;
}

Contact		Contact::set_first_name(std::string	new_name)
{
	this->first_name = new_name;
	return (*this);
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

Contact	Contact::enter_first_name(void)
{
	while (this->first_name == "")
	{
		print_line("Enter the first name: ", LEFT, 0);
		std::getline(std::cin, this->first_name);
	}
	return (*this);
}

Contact	Contact::enter_last_name(void)
{
	while (this->last_name == "")
	{
		print_line("Enter the last name: ", LEFT, 0);
		std::cin >> this->last_name;
	}
	return (*this);
}

Contact	Contact::enter_nickname(void)
{
	while (this->nickname == "")
	{
		print_line("Enter the nickname: ", LEFT, 0);
		std::cin >> this->nickname;
	}
	return (*this);
}

Contact	Contact::enter_phone_number(void)
{
	while (this->phone_number == "")
	{
		print_line("Enter the phone number: ", LEFT, 0);
		std::cin >> this->phone_number;
	}
	return (*this);
}

Contact	Contact::enter_secret(void)
{
	while (this->secret == "")
	{
		print_line("Enter the darkest secret: ", LEFT, 0);
		std::cin >> this->secret;
	}
	return (*this);
}
