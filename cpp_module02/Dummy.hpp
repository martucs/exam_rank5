#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>

#include "ATarget.hpp"
class	ASpell;

class	Dummy: public ATarget
{
	public:
		Dummy();
		Dummy( const Dummy& );
		virtual ~Dummy();
		
		virtual ATarget*	clone() const;

		Dummy&		operator=( const Dummy& );
};

#include "ASpell.hpp"

#endif

