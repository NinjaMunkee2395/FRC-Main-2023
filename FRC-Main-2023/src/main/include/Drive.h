    #include "rev/CANSparkMax.h"
    #include <frc/XboxController.h>
    #include <frc/drive/MecanumDrive.h>
    #include <frc/motorcontrol/MotorControllerGroup.h>
    #define MOTOR_BRUSHLESS rev::CANSparkMaxLowLevel::MotorType::kBrushless


    rev::CANSparkMax m_frontLeft1{5, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_frontLeft2{6, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_rearLeft1{3, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_rearLeft2{4, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_frontRight1{9, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_frontRight2{10, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_rearRight1{7, MOTOR_BRUSHLESS};
    rev::CANSparkMax m_rearRight2{8, MOTOR_BRUSHLESS};

    frc::MotorControllerGroup m_frontLeft{m_frontLeft1, m_frontLeft2};
    frc::MotorControllerGroup m_rearLeft{m_rearLeft1, m_rearLeft2};
    frc::MotorControllerGroup m_frontRight{m_frontRight1, m_frontRight2};
    frc::MotorControllerGroup m_rearRight{m_rearRight1, m_rearRight2};

    frc::MecanumDrive m_robotDrive{m_frontLeft, m_rearLeft, m_frontRight, m_rearRight};

    frc::XboxController m_xboxControl{0};

    double leftX, leftY, rightX;
    double deadzone = 0.15;