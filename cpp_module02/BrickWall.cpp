#include "BrickWall.hpp"

BrickWall::BrickWall()
{
	_type = "Inconspicuous Red-brick Wall";
}

BrickWall::BrickWall( const BrickWall &var)
{
	*this = var;
}


BrickWall::~BrickWall()
{
}

ATarget*	BrickWall::clone() const
{
	return (new BrickWall);
}

BrickWall&	BrickWall::operator=(const BrickWall& var)
{
	if (this != &var)
	{
		_type = var._type;
	}
	return (*this);
}
