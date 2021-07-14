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

int	print_good_bye(void)
{
	print_full();
	print_line("GOODBYE!", CENTER);
	print_line("HAVE A NICE DAY", CENTER);
	print_full();
	return (0);
}

int	print_line(const char *line, t_line pos, int new_line)
{
	int			center_padding;
	int			len;

	len = strlen(line);
	center_padding = (T_WIDTH - len) / 2;
	if (center_padding < 0)
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
		std::cout.width(center_padding);
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

void	print_top(void)
{
	std::ios def(NULL);
    def.copyfmt(std::cout);

	print_full();
	print_line("", LEFT, 0);
	std::cout << SEPARATOR;
	std::cout.width(C_WIDTH);
	std::cout << "Index";
	std::cout << SEPARATOR;
	std::cout.width(C_WIDTH);
	std::cout << "First name";
	std::cout << SEPARATOR;
	std::cout.width(C_WIDTH);
	std::cout << "Last name";
	std::cout << SEPARATOR;
	std::cout.width(C_WIDTH);
	std::cout << "Nickname";
	std::cout << SEPARATOR << std::endl;
	print_full();

	std::cout.copyfmt(def);
}

int	show_welcome(int	show_top)
{
	const char	*welcomeMessage = "WELCOME TO THE OLS-STYLE PHONEBOOK";

	if (show_top)
		print_full();
	if (show_top && print_line(welcomeMessage, CENTER))
		return (1);
	print_full();
	if (print_commands())
		return (1);
	print_full();
	if (print_line("ENTER THE COMMAND:", CENTER))
		return (1);
	return (0);
}
