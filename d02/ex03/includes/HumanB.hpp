#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB( void );
		~HumanB( void );
		HumanB( std::string newName );

		const HumanB	&attack( void );
		const HumanB	&setName( std::string newName );
		const HumanB	&setWeapon( Weapon &newWeapon );
};

#endif
