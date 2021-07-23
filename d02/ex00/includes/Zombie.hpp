#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie
{
	private:
		std::string	name;

	public:
		Zombie( void );
		~Zombie( void );
		Zombie( std::string name );

		void	sayIt( void );
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif
