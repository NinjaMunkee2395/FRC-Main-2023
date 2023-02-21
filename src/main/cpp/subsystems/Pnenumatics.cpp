// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Subsystem.

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Pnenumatics.h"
#include <frc/smartdashboard/SmartDashboard.h>

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Pnenumatics::Pnenumatics(){
    SetName("Pnenumatics");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Pnenumatics");

 AddChild("Arm1", &m_arm1);
 

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Pnenumatics::Periodic() {
    // Put code here to be run every loop

}

void Pnenumatics::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Pnenumatics::setStage(int to) {
    // if (to >= 1) {
    // Pnenumatics::armStage = 0;
    // }else {
    // Pnenumatics::armStage = to;
    // }
    Pnenumatics::isOpen = !Pnenumatics::isOpen;
}

int Pnenumatics::getStage() {
    return Pnenumatics::armStage;
}

void Pnenumatics::MoveStage(int stage) {
    // switch (stage)
    // {
    // case 0:
    //     Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kReverse);
    //     break;
    // case 1:
    //     Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kForward);
    //     break;
    // default:
    //     Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kOff);
    //     break;
    // }
    if (Pnenumatics::isOpen) {
        Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kReverse);
    }else if (!Pnenumatics::isOpen) {
        Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kForward);
    } else {
        Pnenumatics::m_arm1.Set(frc::DoubleSolenoid::kOff);
    }
}