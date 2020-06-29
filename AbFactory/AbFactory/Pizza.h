#pragma once
#include "Seasoning.h"
#include "SeasoningFactory.h"
class Pizza
{
public:
	Pizza(SeasoningFactory *factory);
	~Pizza();

public:
	//准备食材
	void prepare();
	virtual void cut() = 0;
	virtual void cook() = 0;
	virtual void pack() = 0;

protected:
	Salt *salt;  //盐
	Sauce *sauce;  //酱
	Vinegar *vinegar; //醋
	SeasoningFactory *seasoningFactory;
};

class ChinaPizza : public Pizza
{
public:
	ChinaPizza(SeasoningFactory *factory);
	~ChinaPizza();

public:
	//准备食材
	virtual void cut();
	virtual void cook();
	virtual void pack();

};

class JapanPizza : public Pizza
{
public:
	JapanPizza(SeasoningFactory *factory);
	~JapanPizza();

public:
	//准备食材
	virtual void cut();
	virtual void cook();
	virtual void pack();

};

