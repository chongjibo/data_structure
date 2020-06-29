#pragma once
#include "Seasoning.h"
class SeasoningFactory
{
public:
	virtual Salt *createSalt() = 0;
	virtual Sauce *createSauce() = 0;
	virtual Vinegar *createVinegar() = 0;
};

class NorthSeasoningFactory : public SeasoningFactory
{
public:
	virtual Salt *createSalt();
	virtual Sauce *createSauce();
	virtual Vinegar *createVinegar();
};

class SouthSeasoningFactory : public SeasoningFactory
{
public:
	virtual Salt *createSalt();
	virtual Sauce *createSauce();
	virtual Vinegar *createVinegar();
};