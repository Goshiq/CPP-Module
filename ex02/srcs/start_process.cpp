#include "phonebook.h"

int	start_process(void)
{
	std::string	inp;
	Phonebook	phonebook;

	while (1)
	{
		print_line("", LEFT, 0);
		std::getline(std::cin, inp);
		if (!my_strcmp(inp, "ADD"))
			phonebook.add_contact();
		else if (!my_strcmp(inp, "SEARCH"))
			phonebook.search_contact();
		else if (!my_strcmp(inp, "EXIT"))
			return (print_good_bye());
		else
			show_welcome(0);
	}
	return (0);
}
