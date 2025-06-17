#include "Polymorph.hpp"

Polymorph::Polymorph()
{
	_name = "Polymorph";
	_effects = "turned into a critter";
}

Polymorph::Polymorph( const Polymorph &var)
{
	*this = var;
}

ASpell*	Polymorph::clone() const
{
	return (new Polymorph);
}

Polymorph::~Polymorph()
{
}

Polymorph&	Polymorph::operator=(const Polymorph& var)
{
	if (this != &var)
	{
		_name = var._name;
		_effects = var._effects;
	}
	return (*this);
}
