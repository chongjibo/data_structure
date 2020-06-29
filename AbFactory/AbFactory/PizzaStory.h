#pragma once
#include "Pizza.h"
#include "SeasoningFactory.h"
#include <string>

class PizzaStory
{
public:
	PizzaStory();
	~PizzaStory();

	void createPizza(std::string type);
};

