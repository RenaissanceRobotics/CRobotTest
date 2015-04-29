#ifndef RaiseLift_H
#define RaiseLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class RaiseLift: public CommandBase
{
public:
	RaiseLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
