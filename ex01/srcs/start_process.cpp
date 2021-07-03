#include "Phonebook.h"

int	show_welcome(void)
{
	const char	*welcomeMessage = "WELCOME TO THE OLS-STYLE PHONEBOOK";
	int			padding;
	int			len;

	len = std::strlen(welcomeMessage);
	padding = (TERMINAL_WIDTH - len - 2) / 2;
	if (padding < 0)
	{
		std::cout << "ERROR: Your terminal is too old for this phonebook\n";
		return (1);
	}

	std::cout << std::setfill(SYMBOL) << std::setw(TERMINAL_WIDTH) << "\n";
	return (0);
}

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
