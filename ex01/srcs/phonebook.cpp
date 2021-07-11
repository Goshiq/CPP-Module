#include "phonebook.h"

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

int	Phonebook::get_contact_count(void)
{
	return (contacts[0].get_count());
}

Contact	Phonebook::add_contact(void)
{
	Contact	new_contact;
	int		new_count;

	new_count = new_contact.get_count();
	new_contact.enter_first_name();
	new_contact.enter_last_name();
	new_contact.enter_nickname();
	new_contact.enter_phone_number();
	new_contact.enter_secret();
	contacts[new_count % MAX_RECORDS] = new_contact;
	print_line("The contact has been created!", CENTER, 1);
	clear_cin();
	return (contacts[new_count % MAX_RECORDS]);
}

void	Phonebook::search_contact(void)
{
	int	index;

	index = -1;
	while (index < 0 || index >= MAX_RECORDS)
	{
		print_line("Enter the index of the contact: ", LEFT, 0);
		std::cin >> index;
		if (std::cin.fail())
		{
			print_line("Incorrect input format", LEFT, 1);
			std::cin.clear();
			std::cin.ignore(55555, '\n');
			index = -1;
		}
	}
	clear_cin();
}
