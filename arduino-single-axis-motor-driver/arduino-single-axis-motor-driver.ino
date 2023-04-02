#include "motor-structs.h"
#include "motor.h"

Motor motor;// instance of motor

MotorResponse processMotorMessage(Motor& mtr, const MotorMessage& message){
  if (message.movement_mode == MotorMode::HOME_MODE){
    return mtr.goHome();
    }
  if (message.movement_mode == MotorMode::CONTINOUS_MODE){
    const MotorResponse mr1 = mtr.goToPosition(message.movement_mag_start,message.speed,message.movement_unit);
    //notifi start position
    if (!mr1.success) {return mr1;}
    const MotorResponse mr2 = mtr.goToPosition(message.movement_mag_end,message.speed,message.movement_unit);
    return {mr2};
    }

  }
void setup() {
  Serial.begin(115200);
  MotorSetupMessage msm;
  Serial.readBytes((byte*)&msm,sizeof(msm));
  motor = Motor(msm.safe_stop_pin,msm.step_pin,msm.dir_pin,msm.steps_per_mm);
}

//this loop repeats once per request
void loop() {
  
  if (Serial.available()<=0)return;
    
  MotorMessage m;
  Serial.readBytes((byte*)&m,sizeof(m));
  MotorResponse mr = processMotorMessage(motor,m);
  Serial.write((byte*)&mr,sizeof(mr));
}
