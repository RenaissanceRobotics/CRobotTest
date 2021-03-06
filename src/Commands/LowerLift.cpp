#include "LowerLift.h"

LowerLift::LowerLift()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(lift);
}

// Called just before this Command runs the first time
void LowerLift::Initialize()
{
	lift->Lower();
}

// Called repeatedly when this Command is scheduled to run
void LowerLift::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool LowerLift::IsFinished()
{
	return lift->AtBot()\;
}

// Called once after isFinished returns true
void LowerLift::End()
{
	lift->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerLift::Interrupted()
{
	End();
}
