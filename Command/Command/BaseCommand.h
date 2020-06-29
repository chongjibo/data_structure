#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "receiver.h"

class command {
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
};

class LightsCommand : public command
{
public:
	LightsCommand(Light *light);
	virtual void execute();
	virtual void undo();

private:
	Light *_light;
};

class LightsOffCommand : public command
{
public:
	LightsOffCommand(Light *light);
	virtual void execute();
	virtual void undo();

private:
	Light *_light;
};

class FanCommand : public command
{
public:
	FanCommand(Fan* fan);
	virtual void execute();
	virtual void undo();

private: 
	Fan *_fan;
	int preSpeed;
};

class FanOffCommand : public command
{
public:
	FanOffCommand(Fan* fan);
	virtual void execute();
	virtual void undo();

private:
	Fan *_fan;
	int preSpeed;
};

class MacroCommand : public command 
{
public:
	MacroCommand(std::vector<command *> commands);
	virtual void execute();
private:
	std::vector<command *> _commands;
};