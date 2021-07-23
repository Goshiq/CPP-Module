#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	*newOne = newZombie(name);
	newOne->announce();
	delete newOne;
}
