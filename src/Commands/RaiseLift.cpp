#include "RaiseLift.h"

RaiseLift::RaiseLift()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(lift);
}

// Called just before this Command runs the first time
void RaiseLift::Initialize()
{
	lift->Raise();
}

// Called repeatedly when this Command is scheduled to run
void RaiseLift::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool RaiseLift::IsFinished()
{
	return lift->AtBot();
}

// Called once after isFinished returns true
void RaiseLift::End()
{
	lift->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RaiseLift::Interrupted()
{
	End();
}
