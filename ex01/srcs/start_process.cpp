#include "phonebook.h"

int	say_good_bye(void)
{
	print_full();
	print_line("GOODBYE!", CENTER);
	print_line("HAVE A NICE DAY", CENTER);
	print_full();
	return (0);
}

int	start_process(void)
{
	std::string	inp;
	Phonebook	book[8];

	while (1)
	{
		print_line("", LEFT, 0);
		std::cin >> inp;
		if (inp == "ADD")
			std::cout << book[0].getCount() << std::endl;
		else if (inp == "SEARCH")
			return (say_good_bye());
		else if (inp == "EXIT")
			return (say_good_bye());
	}
	return (0);
}
