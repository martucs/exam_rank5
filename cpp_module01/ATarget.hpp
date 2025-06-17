#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>

class	ASpell;

class	ATarget
{
	public:
		ATarget();
		ATarget( std::string type);
		ATarget( const ATarget& );
		virtual ~ATarget();
		
		const std::string&	getType() const;
		void			getHitBySpell(const ASpell&) const;
		virtual ATarget*	clone() const = 0;

		ATarget&		operator=( const ATarget& );

	protected:
		std::string	_type;
};

#include "ASpell.hpp"

#endif

