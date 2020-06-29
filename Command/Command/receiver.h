#pragma once
#include <iostream>
#include <string>
class Light
{
public:
	Light(std::string name);
	void on();
	void off();
private:
	std::string name;
};

class Fan
{
public:
	Fan(std::string name);
	void off();
	void setGear(int gear);
	int getGear();

	static const int OFF = 0;
	static const int LOW = 1;
	static const int MIDDLE = 2;
	static const int HIGH = 3;
private:

	int _gear;
	std::string name;
};