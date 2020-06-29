#include "RemoteControl.h"

int main()
{
	Light *woshiLight = new Light("woshi");
	Light *chufangLight = new Light("chufang");

	Fan *fan = new Fan("fenshan");

	LightsCommand *woLightCom = new LightsCommand(woshiLight);
	LightsOffCommand *woOffLightCom = new LightsOffCommand(woshiLight);

	LightsCommand *chuLightCom = new LightsCommand(chufangLight);
	LightsOffCommand *chuOffLightCom = new LightsOffCommand(chufangLight);

	FanCommand *fanCommand = new FanCommand(fan);
	FanOffCommand *fanOffCommand = new FanOffCommand(fan);

	RemoteControl *reCon = new RemoteControl;
	reCon->setCommand(woLightCom, woOffLightCom);
	reCon->setCommand(chuLightCom, chuOffLightCom);
	reCon->setCommand(fanCommand, fanOffCommand);

	reCon->onButtonPushed();
	reCon->undoButtonPushed();
	reCon->offButtonPushed();
	reCon->undoButtonPushed();
	system("pause");
}