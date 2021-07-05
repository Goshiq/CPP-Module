#include "phonebook.h"

int	print_commands(void)
{
	if (print_line("AVAILABLE COMMANDS:", CENTER)
			|| print_line("ADD - to create a new contact", LEFT)
			|| print_line("SEARCH - to list the Phonebook", LEFT)
			|| print_line("EXIT - to leave it forever", LEFT))
		return (1);
	return (0);
}

void	print_full(void)
{
	std::ios def(NULL);
    def.copyfmt(std::cout);
	std::cout << std::setfill(SYMBOL) << std::setw(T_WIDTH) << "" << std::endl;
	std::cout.copyfmt(def);
}

int	print_line(const char *line, t_line pos, int new_line)
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
		std::cout.width(PADDING);
	std::cout << std::setfill(' ') << "" << line;
	if (new_line)
		std::cout << std::endl;
	/*
	 * Restoring default cout format
	 */
	std::cout.copyfmt(def);
	return (0);
}

int	show_welcome(void)
{
	const char	*welcomeMessage = "WELCOME TO THE OLS-STYLE PHONEBOOK";

	print_full();
	if (print_line(welcomeMessage, CENTER))
		return (1);
	print_full();
	if (print_commands())
		return (1);
	print_full();
	if (print_line("ENTER THE COMMAND:", CENTER))
		return (1);
	return (0);
}
