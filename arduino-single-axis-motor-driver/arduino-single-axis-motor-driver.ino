#include "motor-structs.h"
#include "motor.h"
#include "communication.h"
#include "constants.h"

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

/* MotorSetupMessage parseConfigMessage(){ */
/*   String msg = com::readline(); */
/*   MotorSetupMessage ms; */
/*    */
/*   //read steps_per_mm */
/*   int st_pos = 0; */
/*   int end_pos = msg.indexOf(';'); */
/*   const String steps_per_mm_str = msg.substring(st_pos, end_pos); */
/*   const double steps_per_mm = steps_per_mm_str.toDouble(); */
/*  */
/*   // remove ';' from msg */
/*   msg.setCharAt(end_pos,' '); */
/*  */
/*   //read steps_per_degree */
/*   st_pos = end_pos+1; */
/*   end_pos = msg.indexOf(';'); */
/*   const String steps_per_rev_str = msg.substring(st_pos, end_pos); */
/*   const double steps_per_rev = steps_per_rev_str.toDouble(); */
/*  */
/*  */
/*  */
/*   return MotorSetupMessage {steps_per_mm, steps_per_rev} */
/*  */
/*   } */
/*  */

MotorMessage getMessage(){
  const String messgeType = comm::readline();
  //message type is just one char
  const char typeChar = messgeType[0];
  switch(typeChar){
    case '0':{
      /* const MotorSetupMessage ms = parseConfigMessage(); */
      

      };
    default: ;

  }

}
void setup() {
  Serial.begin(115200);
  delay(5000);
  Serial.println("Creating motor");

  /* MotorSetupMessage msm; */

  /* Serial.readBytes((byte*)&msm,sizeof(msm)); */
  motor = Motor(safe_stop_pin_1, step_pin, direction_pin, steps_per_mm, steps_per_rev);
  Serial.println("Motor homed");
}

//this loop repeats once per request
void loop() {
  
  if (Serial.available()<=0)return;
    
  MotorMessage m;
  Serial.readBytes((byte*)&m,sizeof(m));
  MotorResponse mr = processMotorMessage(motor,m);
  Serial.write((byte*)&mr,sizeof(mr));
}
