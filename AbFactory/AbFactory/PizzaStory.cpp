#include "PizzaStory.h"



PizzaStory::PizzaStory()
{
}


PizzaStory::~PizzaStory()
{
}


void PizzaStory::createPizza(std::string type)
{
	Pizza *pizza;
	if (type == "North") {
		SeasoningFactory *factory = new NorthSeasoningFactory;
		pizza = new  ChinaPizza(factory);
	}else {
		SeasoningFactory *factory = new SouthSeasoningFactory;
		pizza = new JapanPizza(factory);
	}

	pizza->prepare();
	pizza->cut();
	pizza->cook();
	pizza->pack();
}
