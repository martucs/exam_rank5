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
	_spells.clear();
//	std::map<std::string, ASpell*>::iterator	it;
//
//	it = _spells.begin();
//	while (it != _spells.end())
//	{
//	//	_spells.erase(it->first);
//		delete _spells[it->first];
//	}
}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (_spells.find(spell->getName()) == _spells.end())
	{
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
		//_spells[spell->getName()] = spell->clone();
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

