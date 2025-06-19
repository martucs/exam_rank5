#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
#include "ASpell.hpp"

class	Polymorph: public ASpell
{
	public:
		Polymorph();
		Polymorph( const Polymorph& );
		virtual ~Polymorph();
		
		virtual ASpell*	clone() const;
		Polymorph&		operator=( const Polymorph& );
};


#endif
