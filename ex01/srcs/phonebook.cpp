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
	return (contacts[new_count % MAX_RECORDS]);
}
