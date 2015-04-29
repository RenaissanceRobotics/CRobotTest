#ifndef LowerLift_H
#define LowerLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class LowerLift: public CommandBase
{
public:
	LowerLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
