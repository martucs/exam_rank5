#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
#include "ASpell.hpp"

class	Fireball: public ASpell
{
	public:
		Fireball();
		Fireball( const Fireball& );
		virtual ~Fireball();
		
		virtual ASpell*	clone() const;
		Fireball&		operator=( const Fireball& );
};

#endif
