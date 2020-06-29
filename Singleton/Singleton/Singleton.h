#pragma once
class Singleton
{
public:
	static Singleton* instance;
	static Singleton* getInstance();
private:
	Singleton();

};

