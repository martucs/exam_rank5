#include "Dummy.hpp"

Dummy::Dummy()
{
	_type = "Target Practice Dummy";
}

Dummy::Dummy( const Dummy &var)
{
	*this = var;
}


Dummy::~Dummy()
{
}

ATarget*	Dummy::clone() const
{
	return (new Dummy);
}

Dummy&	Dummy::operator=(const Dummy& var)
{
	if (this != &var)
	{
		_type = var._type;
	}
	return (*this);
}

