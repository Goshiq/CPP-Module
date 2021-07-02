#include "Phonebook.h"

int	Phonebook::count = 0;

Phonebook::Phonebook()
{
	Phonebook::count++;
}

Phonebook::~Phonebook()
{
}

int	Phonebook::getCount()
{
	return count;
}
