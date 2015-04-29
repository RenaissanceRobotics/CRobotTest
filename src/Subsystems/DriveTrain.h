#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	SpeedController* left;
	SpeedController* right;
	RobotDrive* drive;
	Gyro* gyro;
public:
	DriveTrain();
	void InitDefaultCommand();

	void Drive(double left, double right);
	void Drive(Joystick* joy);
	void ArcadeDrive(double speed, double angle);

	void Reset();
	double GetAngle();
};

#endif
