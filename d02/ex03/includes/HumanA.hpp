#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanA( void );
		HumanA( Weapon &newWeapon );
		HumanA( std::string newName, Weapon &newWeapon );
		~HumanA( void );

		const HumanA	&attack( void );
		const HumanA	&setName( std::string newName );
};

#endif
