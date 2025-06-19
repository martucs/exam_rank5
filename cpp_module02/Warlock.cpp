#include "Warlock.hpp"
#include "ASpell.hpp"

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
	_spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string spellName)
{
	_spellBook.forgetSpell(spellName);
}

void	Warlock::launchSpell(const std::string spellName, ATarget& target)
{
	ASpell*	existingSpell;

	existingSpell = _spellBook.createSpell(spellName);
	if (existingSpell != NULL)
	{
		target.getHitBySpell(*existingSpell);
		delete existingSpell;
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
