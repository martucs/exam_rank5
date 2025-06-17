#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>

class ASpell;

class	SpellBook
{
	public:
		SpellBook();
		~SpellBook();
		
		void		learnSpell(ASpell* spell);
		void		forgetSpell(std::string const& spellName);
		ASpell*		createSpell(std::string const& spellName);

	private:
		std::map<std::string, ASpell*>	_spellBook;
		
		SpellBook( const SpellBook& );
		SpellBook&	operator=( const SpellBook& );
};
# include "ASpell.hpp"

#endif
