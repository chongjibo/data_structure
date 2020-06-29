#include <iostream>
#include "BaseCommand.h"

LightsCommand::LightsCommand(Light *light)
{
	_light = light;
}

void LightsCommand::execute()
{
	_light->on();
}

void LightsCommand::undo()
{
	_light->off();
}


LightsOffCommand::LightsOffCommand(Light *light)
{
	_light = light;
}

void LightsOffCommand::execute()
{
	_light->off();
}

void LightsOffCommand::undo()
{
	_light->on();
}


FanCommand::FanCommand(Fan *fan)
{
	_fan = fan;
}

void FanCommand::execute()
{
	preSpeed = _fan->getGear();
	_fan->setGear(1);
}

void FanCommand::undo()
{
	_fan->setGear(preSpeed);
}

FanOffCommand::FanOffCommand(Fan* fan)
{
	_fan = fan;
}

void FanOffCommand::execute()
{
	preSpeed = _fan->getGear();
	_fan->setGear(0);
}

void FanOffCommand::undo()
{
	_fan->setGear(preSpeed);
}

MacroCommand::MacroCommand(std::vector<command *> commands)
{
	_commands = commands;
}

void MacroCommand::execute()
{
	for (std::vector<command *>::const_iterator cit = commands.cbegin(); cit != commands.cend(); cit++)
		(*cit)->execute();
}
