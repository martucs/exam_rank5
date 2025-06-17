#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook( const SpellBook &var)
{
	*this = var;
}

SpellBook::~SpellBook()
{
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (_spellBook.find(spell->getName()) == _spellBook.end())
	{
		_spellBook.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
	}
}

void	SpellBook::forgetSpell(std::string spellName)
{
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook.erase(spellName);
	}
}

void	SpellBook::launchSpell(std::string spellName, ATarget& target)
{

	if (_spellBook.find(spellName) != _spellBook.end())
	{
		target.getHitBySpell(*_spellBook[spellName]);
	}
}

SpellBook&	SpellBook::operator=(const SpellBook& var)
{
	if (this != &var)
	{
		//_spellBook;
	}
	return (*this);
}

