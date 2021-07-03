#include "Phonebook.h"

int	Phonebook::count = 0;

Phonebook::Phonebook()
{
	Phonebook::id = Phonebook::count++;
}

Phonebook::~Phonebook()
{
}

int	Phonebook::getCount() const
{
	return count;
}
