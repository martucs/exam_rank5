#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>

class ATarget;

class	TargetGenerator
{
	public:
		TargetGenerator();
		TargetGenerator( std::string name, std::string title);
		~TargetGenerator();
		

		void		learnTargetType(ATarget* target);
		void		forgetTargetType(std::string const& type);
		ATarget*	createTarget(std::string const& type);

	private:
		TargetGenerator( const TargetGenerator& );
		TargetGenerator&	operator=( const TargetGenerator& );
};

#endif
