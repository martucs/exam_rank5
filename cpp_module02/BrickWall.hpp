#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>

#include "ATarget.hpp"

class	BrickWall: public ATarget
{
	public:
		BrickWall();
		BrickWall( const BrickWall& );
		~BrickWall();
		
		ATarget*	clone() const;

		BrickWall&		operator=( const BrickWall& );
};

#endif
