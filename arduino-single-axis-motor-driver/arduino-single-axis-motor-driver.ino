#include "motor-structs.h"
#include "motor.h"
#include "communication.h"
#include "constants.h"

Motor motor;// instance of motor

MotorResponse processMotorMessage(Motor& mtr, const MotorMessage& message){
  if (message.movement_mode == MotorMode::HOME_MODE){
    return mtr.goHome();
    }
  if (message.movement_mode == MotorMode::ABSOLUTE){
    return mtr.goToPosition(message.mag,message.speed,message.movement_unit);
    }

  if (message.movement_mode == MotorMode::RELATIVE){

    return  mtr.relativeMove(message.mag,message.speed, message.movement_unit);
    }

  }

void setup() {
  Serial.begin(2e6);
  delay(2000);

  motor = Motor(safe_stop_pin_1,safe_stop_pin_2, step_pin, direction_pin, steps_per_mm, steps_per_rev);

}

//this loop repeats once per request
void loop() {
  if (Serial.available()<=0)return;

  const MotorMessage m = comm::readMessage();
  MotorResponse mr = processMotorMessage(motor,m);
  comm::writeMessage(mr);
}
