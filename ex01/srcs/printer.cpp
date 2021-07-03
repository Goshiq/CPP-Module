#include "phonebook.h"

int	print_commands()
{
	if (print_line("AVAILABLE COMMANDS:", CENTER)
			|| print_line("ADD - to create a new contact", LEFT)
			|| print_line("SEARCH - to list the Phonebook", LEFT)
			|| print_line("EXIT - to leave it forever", LEFT))
		return (1);
	return (0);
}

int	print_enter()
{
	if (print_line("ENTER THE COMMAND:", CENTER))
		return (1);
	return (0);
}

int	print_line(const char *line, t_line pos)
{
	int			padding;
	int			len;

	len = std::strlen(line);
	padding = (T_WIDTH - len) / 2;

	if (padding < 0)
	{
		std::cout << "ERROR: Your terminal is too small for this phonebook\n";
		return (1);
	}
	/*
	 * We are saving default cout format
	 */
	std::ios def(NULL);
    def.copyfmt(std::cout);
	if (pos == CENTER)
		std::cout.width(padding);
	else if (pos == LEFT)
		std::cout.width(5);
	std::cout << std::setfill(' ') << "" << line << std::endl;

	/*
	 * Restoring default cout format
	 */
	std::cout.copyfmt(def);
	return (0);
}

int	show_welcome(void)
{
	const char	*welcomeMessage = "WELCOME TO THE OLS-STYLE PHONEBOOK";

	std::cout << std::setfill(SYMBOL) << std::setw(T_WIDTH) << "" << std::endl;
	if (print_line(welcomeMessage, CENTER))
		return (1);
	std::cout << std::setfill(SYMBOL) << std::setw(T_WIDTH) << "" << std::endl;
	if (print_commands())
		return (1);
	std::cout << std::setfill(SYMBOL) << std::setw(T_WIDTH) << "" << std::endl;
	if (print_enter())
		return (1);
	return (0);
}
