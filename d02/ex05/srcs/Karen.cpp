#include "Karen.hpp"

Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::error( void )
{
	std::cout << "SOS! MAYDAY!11 PAMAGITI!!!1" << std::endl;
}

void	Karen::debug( void )
{
	std::cout << "Everything is fine" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I am going to work for a while" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "There is no way to stop me. I am going to leave it for 5..4..3.." << std::endl;
}

void	Karen::def( void )
{
	std::cout << "Huh? o_0" << std::endl;
}

void	Karen::complain( const std::string level )
{
	void		(Karen::*funcPtr[5]) ( void );
	std::string	options[4];
	int			i;

	i = 0;

	options[0] = "ERROR";
	options[1] = "DEBUG";
	options[2] = "INFO";
	options[3] = "WARNING";

	funcPtr[0] = &Karen::error;
	funcPtr[1] = &Karen::debug;
	funcPtr[2] = &Karen::info;
	funcPtr[3] = &Karen::warning;
	funcPtr[4] = &Karen::def;

	while (i < 4 && options[i].compare(level))
		i++;
	(this->*funcPtr[i])();
}
