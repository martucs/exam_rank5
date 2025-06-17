#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	_name = "Fwoosh";
	_effects = "fwooshed";
}

Fwoosh::Fwoosh( const Fwoosh &var)
{
	*this = var;
}

ASpell*	Fwoosh::clone() const
{
	return (new Fwoosh);
}

Fwoosh::~Fwoosh()
{
}

Fwoosh&	Fwoosh::operator=(const Fwoosh& var)
{
	if (this != &var)
	{
		_name = var._name;
		_effects = var._effects;
	}
	return (*this);
}

