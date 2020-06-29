#include "receiver.h"

Light::Light(std::string name)
{
	this->name = name;
	std::cout << name << std::endl;
}

void Light::on()
{
	std::cout << name << " on" << std::endl;
}

void Light::off()
{
	std::cout << name << " off" << std::endl;
}

Fan::Fan(std::string name)
{
	this->name = name;
	std::cout << name << std::endl;
	_gear = OFF;
}

//fan µç·çÉÈ
void Fan::off()
{
	_gear = OFF;
	std::cout << "feng shan guan le" << std::endl;

}


void Fan::setGear(int gear)
{
	_gear = gear;
	std::cout << "feng shan " << gear << std::endl;
}

int Fan::getGear()
{
	return _gear;
}
