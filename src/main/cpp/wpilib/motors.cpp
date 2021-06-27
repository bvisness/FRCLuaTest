// Automatically generated by bindings.c. DO NOT EDIT.

#include <ctre/phoenix/motorcontrol/can/WPI_TalonFX.h>
#include <ctre/phoenix/motorcontrol/can/WPI_TalonSRX.h>
#include <frc/PWMSparkMax.h>
#include <frc/TimedRobot.h>
#include <frc/drive/DifferentialDrive.h>

#include "luadef.h"

LUAFUNC void* PWMSparkMax_new(int channel) {
}

LUAFUNC toSpeedController PWMSparkMax_() {
}

LUAFUNC Set PWMSparkMax_() {
}

LUAFUNC void* TalonSRX_new(int deviceNumber) {
}

LUAFUNC toSpeedController TalonSRX_() {
}

LUAFUNC Get TalonSRX_() {
}

LUAFUNC Set TalonSRX_() {
}

LUAFUNC SetInverted TalonSRX_() {
}

LUAFUNC void* TalonFX_new(int deviceNumber) {
}

LUAFUNC toSpeedController TalonFX_() {
}

LUAFUNC Get TalonFX_() {
}

LUAFUNC Set TalonFX_() {
}

LUAFUNC SetInverted TalonFX_() {
}

LUAFUNC void* DifferentialDrive_new(void* leftMotor, void* rightMotor) {
}

LUAFUNC 
      auto l = (frc::SpeedController*)leftMotor;
      auto r = (frc::SpeedController*)rightMotor;
      return new frc::DifferentialDrive(*l, *r);
     DifferentialDrive_void() {
}

LUAFUNC  DifferentialDrive_() {
}

