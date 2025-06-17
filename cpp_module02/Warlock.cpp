#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock( const Warlock &var)
{
	*this = var;
}

Warlock::Warlock(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string	Warlock::getName() const
{
	return (_name);
}

std::string	Warlock::getTitle() const
{
	return (_title);
}

void	Warlock::setTitle(std::string title)
{
	_title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (_spells.find(spell->getName()) == _spells.end())
	{
//		std::cout << "inserting spell " << spell->getName() << std::endl;
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
	}
}

void	Warlock::forgetSpell(std::string spellName)
{
	if (_spells.find(spellName) != _spells.end())
	{
//		std::cout << "forgetting spell " << spellName << std::endl;
		_spells.erase(spellName);
	}
}

void	Warlock::launchSpell(std::string spellName, ATarget& target)
{

	if (_spells.find(spellName) != _spells.end())
	{
	//	std::cout << "launching spell " << spellName << std::endl;
		target.getHitBySpell(*_spells[spellName]);
	}
}

Warlock&	Warlock::operator=(const Warlock& var)
{
	if (this != &var)
	{
		_name = var._name;
		_title = var._title;
	}
	return (*this);
}
