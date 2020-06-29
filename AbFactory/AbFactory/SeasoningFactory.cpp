#include "SeasoningFactory.h"



Salt *NorthSeasoningFactory::createSalt()
{
	return new IodizedSalt;
}

Sauce * NorthSeasoningFactory::createSauce()
{
	return new TomatoSauce;
}

Vinegar * NorthSeasoningFactory::createVinegar()
{
	return new MatureVinegar;
}

Salt * SouthSeasoningFactory::createSalt()
{
	return new FluorideSalt;
}

Sauce * SouthSeasoningFactory::createSauce()
{
	return new SesameSauce;
}

Vinegar * SouthSeasoningFactory::createVinegar()
{
	return new RiceVinegar;
}
