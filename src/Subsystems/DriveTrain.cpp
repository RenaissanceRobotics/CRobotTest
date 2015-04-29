#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() :
		Subsystem("ExampleSubsystem")
{
	left = new Victor(LEFTMOTOR);
	right = new Victor(RIGHTMOTOR);
	drive = new RobotDrive(left, right);
	gyro = new Gyro(GYRO);
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::Drive(double left, double right) {
	drive->TankDrive(left, right);
}

void DriveTrain::Drive(Joystick* joy) {
	drive->TankDrive(-joy->GetY(), -joy->GetRawAxis(4));
}

void DriveTrain::ArcadeDrive(double speed, double angle) {
	drive->ArcadeDrive(speed, angle);
}

void DriveTrain::Reset() {
	gyro->Reset();
}

double DriveTrain::GetAngle() {
	return gyro->GetAngle();
}
