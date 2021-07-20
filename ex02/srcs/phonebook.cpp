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
	//clear_cin();
	return (contacts[new_count % MAX_RECORDS]);
}

void	Phonebook::search_contact(void)
{
	int	index;

	index = -1;
	if (contacts[0].get_first_name() == "")
	{
		print_line("THE PHONEBOOK IS EMPTY!", CENTER, 1);
		return ;
	}
	print_top();
	for (int i = 0; i < MAX_RECORDS; ++i)
	{
		if (contacts[i].get_first_name() == "")
			break ;
		contacts[i].show_short(i + 1);
	}
	while (index < 1 || index > MAX_RECORDS)
	{
		print_line("Enter the index of the contact: ", LEFT, 0);
		std::cin >> index;
		if (std::cin.fail() || index < 1 || index > MAX_RECORDS ||
			contacts[index - 1].get_first_name() == "")
		{
			print_line("Incorrect input format", LEFT, 1);
			clear_cin();
			index = -1;
		}
	}
	contacts[index - 1].show_full(index);
	clear_cin();
}
