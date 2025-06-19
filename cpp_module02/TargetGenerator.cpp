#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator( const TargetGenerator &var)
{
	*this = var;
}

TargetGenerator::~TargetGenerator()
{
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (_targets.find(target->getType()) == _targets.end())
	{
		//_targets.insert(std::pair<std::string, ATarget*>(target->getType(), target));
		_targets[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string const& targetName)
{
	if (_targets.find(targetName) != _targets.end())
	{
		delete _targets[targetName];
		_targets.erase(targetName);
	}
}

ATarget*	TargetGenerator::createTarget(std::string const& targetName)
{
	if (_targets.find(targetName) != _targets.end())
	{
		return (_targets[targetName]->clone());
	}
	return (NULL);
}

TargetGenerator&	TargetGenerator::operator=(const TargetGenerator& var)
{
	if (this != &var)
	{
		//_targets;
	}
	return (*this);
}
