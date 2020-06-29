#include "RemoteControl.h"



RemoteControl::RemoteControl()
{
}


RemoteControl::~RemoteControl()
{
}

void RemoteControl::setCommand(command *onCommand, command *offCommand)
{
	onCommands.push_back(onCommand);
	offCommands.push_back(offCommand);
}

void RemoteControl::onButtonPushed()
{
	for (std::vector<command *>::const_iterator cit = onCommands.cbegin(); cit != onCommands.cend(); ++cit) {
		(*cit)->execute();
		undoCommand = *cit;
	}
		
}

void RemoteControl::offButtonPushed()
{
	for (std::vector<command *>::const_iterator cit = offCommands.cbegin(); cit != offCommands.cend(); ++cit) {
		(*cit)->execute();
		undoCommand = *cit;
	}
		
}

void RemoteControl::undoButtonPushed()
{
	undoCommand->undo();
}
