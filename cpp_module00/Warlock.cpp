#include "Warlock.hpp"


Warlock::Warlock()
{

}

Warlock::Warlock( const Warlock &var)
{
	*this = var;
}

Warlock::Warlock(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string	Warlock::getName() const
{
	return (_name);
}

std::string	Warlock::getTitle() const
{
	return (_title);
}

void	Warlock::setTitle(std::string title)
{
	_title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

Warlock&	Warlock::operator=(const Warlock& var)
{
	if (this != &var)
	{
		_name = var._name;
		_title = var._title;
	}
	return (*this);
}
