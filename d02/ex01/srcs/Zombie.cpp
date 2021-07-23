#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "";
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is dying..." << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
}

void	Zombie::setName( std::string newName )
{
	this->name = newName;
}

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
