#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell( const ASpell &var)
{
	*this = var;
}

ASpell::ASpell(std::string name, std::string effects)
{
	_name = name;
	_effects = effects;
}

ASpell::~ASpell()
{
}

const std::string&	ASpell::getName() const
{
	return (_name);
}

std::string	ASpell::getEffects() const
{
	return (_effects);
}

void	ASpell::launch(const ATarget& target)
{
	target.getHitBySpell(*this);
}

/*ASpell*	ASpell::clone() const
{
	return ();
}*/

ASpell&	ASpell::operator=(const ASpell& var)
{
	if (this != &var)
	{
		_name = var._name;
		_effects = var._effects;
	}
	return (*this);
}

