#ifndef Lift_H
#define Lift_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lift: public Subsystem
{
private:
	SpeedController* motor;
	DigitalInput* topSwitch;
	DigitalInput* botSwitch;
public:
	Lift();
	void InitDefaultCommand() {};

	void Raise();
	void Lower();
	void Stop();

	bool AtTop();
	bool AtBot();
};

#endif
