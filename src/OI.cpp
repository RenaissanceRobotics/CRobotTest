#include "OI.h"

OI::OI()
{
	joy = new Joystick(JOYSTICK);

	JoystickButton* but1 = new JoystickButton(joy, 1);
	JoystickButton* but2 = new JoystickButton(joy, 2);

	but1->WhenPressed(new RaiseLift());
	but2->WhenPressed(new LowerLift());
}

Joystick* OI::GetJoyStick() {
	return joy;
}
