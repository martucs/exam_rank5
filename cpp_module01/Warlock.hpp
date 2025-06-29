#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include <utility>
# include "ASpell.hpp"

class ASpell;
class ATarget;

class	Warlock
{
	public:
		Warlock( std::string name, std::string title);
		~Warlock();
		
		std::string	getName() const;
		std::string	getTitle() const;
		void		setTitle(std::string title);
		void		introduce() const;
		void		learnSpell(ASpell* spell);
		void		forgetSpell(std::string spellName);
		void		launchSpell(std::string spellName, ATarget& target);

	private:
		std::string	_name;
		std::string	_title;
		std::map<std::string, ASpell*>	_spells;
		
		Warlock();
		Warlock( const Warlock& );
		Warlock&	operator=( const Warlock& );
};
# include "ASpell.hpp"

#endif

