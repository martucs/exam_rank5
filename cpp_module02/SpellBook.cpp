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
	if (_spells.find(spell->getName()) == _spells.end())
	{
		std::cout << "before segfault" << std::endl;

		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
	//	_spells[spell->getName()] = spell->clone();
		std::cout << "AFTER segfault" << std::endl;
	}
}

void	SpellBook::forgetSpell(std::string const& spellName)
{
	if (_spells.find(spellName) != _spells.end())
	{
		delete _spells[spellName];
		_spells.erase(spellName);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spellName)
{
	if (_spells.find(spellName) != _spells.end())
	{
		return (_spells[spellName]->clone());
	}
	return (NULL);
}

SpellBook&	SpellBook::operator=(const SpellBook& var)
{
	if (this != &var)
	{
		//_spells;
	}
	return (*this);
}

