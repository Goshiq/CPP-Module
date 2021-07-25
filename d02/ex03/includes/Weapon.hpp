#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	type;

	public:
		Weapon( void );
		Weapon( std::string newType );
		~Weapon( void );

		const std::string	&getType( void );
		const Weapon		&setType( std::string newType );
};

#endif
