#pragma once

#include <iostream>
#include <string>
using namespace std;

class Salt {
public:
	Salt();
	virtual void name() = 0;
};

class IodizedSalt : public Salt
{
public:
	IodizedSalt();
	void name();
};

class FluorideSalt : public Salt {
public:
	FluorideSalt();
	void name();
};

class Sauce {
public:
	Sauce();
	virtual void name() = 0;
};

class TomatoSauce : public Sauce {
public:
	TomatoSauce();
	virtual void name();
};

class SesameSauce : public Sauce {
public:
	SesameSauce();
	virtual void name();
};


class Vinegar { //´×
public:
	Vinegar();
	virtual void name() = 0;
};

class MatureVinegar : public Vinegar { //´×
public:
	MatureVinegar();
	virtual void name();
};

class RiceVinegar : public Vinegar { //´×
public:
	RiceVinegar();
	virtual void name();
};