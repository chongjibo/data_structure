#pragma once
#include <vector>
#include "BaseCommand.h"

class RemoteControl
{
public:
	RemoteControl();
	~RemoteControl();
	void setCommand(command *onCommand, command *offCommand);
	void onButtonPushed();
	void offButtonPushed();
	void undoButtonPushed();
private:
	std::vector<command *> onCommands;
	std::vector<command *> offCommands;
	command *undoCommand;
};

