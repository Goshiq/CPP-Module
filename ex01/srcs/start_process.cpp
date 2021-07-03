#include "phonebook.h"

int	start_process(void)
{
	std::string	inp;

	while (1)
	{
		Phonebook	book;
		std::cin >> inp;
		std::cout << book.getCount() << std::endl;
	}
	return (0);
}
