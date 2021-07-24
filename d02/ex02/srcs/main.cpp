#include "Zombie.hpp"
#include <iomanip>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << std::setw(20) << std::left << "Str's adress:" << std::right
				<< &str << std::endl;
	std::cout << std::setw(20) << std::left << "Ptr's adress:" << std::right
				<< ptr << std::endl;
	std::cout << std::setw(20) << std::left << "Ref's adress:" << std::right
				<< &ref << std::endl;


	std::cout << std::setw(20) << std::left << "String by ptr:" << std::right
				<< *ptr << std::endl;
	std::cout << std::setw(20) << std::left << "String by ref:" << std::right
				<< ref << std::endl;
}
