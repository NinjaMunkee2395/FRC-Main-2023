// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Command.

#include "RobotContainer.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

#include "commands/TeleopDrive.h"

TeleopDrive::TeleopDrive(DriveTrain* m_drivetrain)
:m_drivetrain(m_drivetrain){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("TeleopDrive");
    AddRequirements({m_drivetrain});

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

}

// Called just before this Command runs the first time
void TeleopDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleopDrive::Execute() {
    double mechanumX = RobotContainer::GetInstance()->getXboxController()->GetLeftX();
    double mechanumY = RobotContainer::GetInstance()->getXboxController()->GetLeftY();
    double mechanumRot = RobotContainer::GetInstance()->getXboxController()->GetRightX();
    m_drivetrain->MechanumDrive(mechanumY, mechanumX, mechanumRot);
}

// Make this return true when this Command no longer needs to run execute()
bool TeleopDrive::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void TeleopDrive::End(bool interrupted) {

}

bool TeleopDrive::RunsWhenDisabled() const {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
    return false;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
}