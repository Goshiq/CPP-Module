#include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "SOS! MAYDAY!11 PAMAGITI!!!1" << std::endl;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Everything is fine" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I am going to work for a while" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "There is no way to stop me. I am going to leave it for 5..4..3.." << std::endl;
}

void	Karen::def( void )
{
	std::cout << "Huh? o_0" << std::endl;
}

void	Karen::complain( const std::string level )
{
	std::string	options[4];
	int			i;

	i = 0;

	options[0] = "DEBUG";
	options[1] = "INFO";
	options[2] = "WARNING";
	options[3] = "ERROR";

	while (i < 4 && options[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			this->def();
			break ;
	}
}
