#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget( const ATarget &var)
{
	*this = var;
}

ATarget::ATarget(std::string type)
{
	_type = type;
}

ATarget::~ATarget()
{
}

const std::string&	ATarget::getType() const
{
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget&	ATarget::operator=(const ATarget& var)
{
	if (this != &var)
	{
		_type = var._type;
	}
	return (*this);
}

