#pragma once
#include "Seasoning.h"
#include "SeasoningFactory.h"
class Pizza
{
public:
	Pizza(SeasoningFactory *factory);
	~Pizza();

public:
	//׼��ʳ��
	void prepare();
	virtual void cut() = 0;
	virtual void cook() = 0;
	virtual void pack() = 0;

protected:
	Salt *salt;  //��
	Sauce *sauce;  //��
	Vinegar *vinegar; //��
	SeasoningFactory *seasoningFactory;
};

class ChinaPizza : public Pizza
{
public:
	ChinaPizza(SeasoningFactory *factory);
	~ChinaPizza();

public:
	//׼��ʳ��
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
	//׼��ʳ��
	virtual void cut();
	virtual void cook();
	virtual void pack();

};

