#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

class ATarget;

class	ASpell
{
	public:
		ASpell();
		ASpell( std::string name, std::string effects);
		ASpell( const ASpell& );
		virtual ~ASpell();
		
		const std::string&	getName() const;
		std::string	getEffects() const;
		void		launch(const ATarget&);
		virtual ASpell*	clone() const = 0;

		ASpell&	operator=( const ASpell& );
	protected:
		std::string	_name;
		std::string	_effects;
};

#include "ATarget.hpp"

#endif
