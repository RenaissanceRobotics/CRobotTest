#include "DriveStraight.h"

DriveStraight::DriveStraight(double time)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(driveTrain);
	SetTimeout(time);
	driveTrain->Reset();
}

// Called just before this Command runs the first time
void DriveStraight::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveStraight::Execute()
{
	driveTrain->ArcadeDrive(-1.0, -driveTrain->GetAngle() * 0.03);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveStraight::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void DriveStraight::End()
{
	driveTrain->Drive(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStraight::Interrupted()
{
	End();
}
