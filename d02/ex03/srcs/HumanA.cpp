#include "HumanA.hpp"

HumanA::HumanA( void )
{
	this->name = "";
}

HumanA::~HumanA( void )
{
}

HumanA::HumanA( Weapon &newWeapon )
{
	this->weapon = &newWeapon;
}

HumanA::HumanA( std::string newName, Weapon &newWeapon )
{
	this->name = newName;
	this->weapon = &newWeapon;
}

const HumanA&	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weapon->getType()
				<< std::endl;
	return (*this);
}

const HumanA&	HumanA::setName( std::string newName )
{
	this->name = newName;
	return (*this);
}
