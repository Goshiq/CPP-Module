#include "HumanB.hpp"

HumanB::HumanB( void )
{
	this->name = "";
}

HumanB::~HumanB( void )
{
}

HumanB::HumanB( std::string newName )
{
	this->name = newName;
}

const HumanB&	HumanB::attack( void )
{
	std::cout << this->name << " attacks with his ";
	if (this->weapon)
	{
		std::cout << this->weapon->getType();
	}
	else
	{
		std::cout << "Empty hands";
	}
	std::cout << std::endl;
	return (*this);
}

const HumanB&	HumanB::setName( std::string newName )
{
	this->name = newName;
	return (*this);
}

const HumanB&	HumanB::setWeapon( Weapon &newWeapon )
{
	this->weapon = &newWeapon;
	return (*this);
}
