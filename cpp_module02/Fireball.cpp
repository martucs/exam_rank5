#include "Fireball.hpp"

Fireball::Fireball()
{
	_name = "Fireball";
	_effects = "burnt to a crisp";
}

Fireball::Fireball( const Fireball &var)
{
	*this = var;
}

ASpell*	Fireball::clone() const
{
	return (new Fireball(*this));
}

Fireball::~Fireball()
{
}

Fireball&	Fireball::operator=(const Fireball& var)
{
	if (this != &var)
	{
		_name = var._name;
		_effects = var._effects;
	}
	return (*this);
}
