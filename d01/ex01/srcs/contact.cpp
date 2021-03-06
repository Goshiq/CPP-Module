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

std::ostream& operator<< (std::ostream &out, Contact &contact)
{
	std::cout.width(10);
	if (contact.first_name.length() <= 10)
		std::cout << contact.first_name << '|';
	else
	{
		std::cout.width(9);
		std::cout << contact.first_name.substr(0, 9) << '.' << '|';
	}
	std::cout.width(10);
	if (contact.last_name.length() <= 10)
		std::cout << contact.last_name << '|';
	else
	{
		std::cout.width(9);
		std::cout << contact.last_name.substr(0, 9) << '.' << '|';
	}
	std::cout.width(10);
	if (contact.nickname.length() <= 10)
		std::cout << contact.nickname << '|';
	else
	{
		std::cout.width(9);
		std::cout << contact.nickname.substr(0, 9) << '.' << '|';
	}
	return (out);
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

Contact		Contact::set_last_name(std::string	new_name)
{
	this->last_name = new_name;
	return (*this);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

Contact		Contact::set_nickname(std::string	new_name)
{
	this->nickname = new_name;
	return (*this);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

Contact		Contact::set_phone_number(std::string	new_name)
{
	this->phone_number = new_name;
	return (*this);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

Contact		Contact::set_secret(std::string	new_name)
{
	this->secret = new_name;
	return (*this);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
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
		std::getline(std::cin, this->last_name);
	}
	return (*this);
}

Contact	Contact::enter_nickname(void)
{
	while (this->nickname == "")
	{
		print_line("Enter the nickname: ", LEFT, 0);
		std::getline(std::cin, this->nickname);
	}
	return (*this);
}

Contact	Contact::enter_phone_number(void)
{
	while (this->phone_number == "")
	{
		print_line("Enter the phone number: ", LEFT, 0);
		std::getline(std::cin, this->phone_number);
	}
	return (*this);
}

Contact	Contact::enter_secret(void)
{
	while (this->secret == "")
	{
		print_line("Enter the darkest secret: ", LEFT, 0);
		std::getline(std::cin, this->secret);
	}
	return (*this);
}

void	Contact::show_full(int	index)
{
	print_full();
	print_line("Contact #", CENTER, 0);
	std::cout << index << std::endl;
	print_line("First name: ", LEFT, 0);
	std::cout << this->first_name << std::endl;
	print_line("Last name: ", LEFT, 0);
	std::cout << this->last_name << std::endl;
	print_line("Nickname: ", LEFT, 0);
	std::cout << this->nickname << std::endl;
	print_line("Phone number: ", LEFT, 0);
	std::cout << this->phone_number << std::endl;
	print_line("Darkest secret: ", LEFT, 0);
	std::cout << this->secret << std::endl;
	print_full();
}

void	Contact::show_short(int	index)
{
	print_line("|", LEFT, 0);
	std::cout.width(10);
	std::cout << index << '|';
	std::cout << *this << std::endl;
}
