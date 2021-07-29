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

void	Karen::complain( std::string level )
{
	std::cout << level;
}
