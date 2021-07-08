#include "contact.h"

int	Contact::count = 0;

Contact::Contact()
{
	Contact::count++;
	this->id = Contact::count;
}

Contact::~Contact()
{
}
