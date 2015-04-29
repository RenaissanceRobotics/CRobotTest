#include "Lift.h"
#include "../RobotMap.h"

Lift::Lift() :
		Subsystem("Lift")
{
	motor = new Victor(LIFTMOTOR);
	topSwitch = new DigitalInput(TOP_LIFT_SWITCH);
	botSwitch = new DigitalInput(BOT_LIFT_SWITCH);
}

void Lift::Raise() {
	motor->Set(1);
}

void Lift::Lower() {
	motor->Set(-1);
}

void Lift::Stop() {
	motor->Set(0);
}

bool Lift::AtTop() {
	return topSwitch->Get();
}

bool Lift::AtBot() {
	return botSwitch->Get();
}
