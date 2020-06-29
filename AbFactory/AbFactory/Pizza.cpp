#include "Pizza.h"
#include <iostream>

Pizza::Pizza(SeasoningFactory *factory):
	seasoningFactory(factory)

{
}


Pizza::~Pizza()
{
}

void Pizza::prepare()
{
	salt = seasoningFactory->createSalt();
	sauce = seasoningFactory->createSauce();
	vinegar = seasoningFactory->createVinegar();

	salt->name();
	sauce->name();
	vinegar->name();
}


ChinaPizza::ChinaPizza(SeasoningFactory * factory):
	Pizza(factory)
{

}

void ChinaPizza::cut()
{
	std::cout << "ChinaPizza:cut" << std::endl;
}

void ChinaPizza::cook()
{
	std::cout << "ChinaPizza:cook" << std::endl;
}

void ChinaPizza::pack()
{
	std::cout << "ChinaPizza:pack" << std::endl;
}

JapanPizza::JapanPizza(SeasoningFactory * factory) :
	Pizza(factory)
{

}

void JapanPizza::cut()
{
	std::cout << "JapanPizza:cut" << std::endl;
}

void JapanPizza::cook()
{
	std::cout << "JapanPizza:cook" << std::endl;
}

void JapanPizza::pack()
{
	std::cout << "JapanPizza:pack" << std::endl;
}

