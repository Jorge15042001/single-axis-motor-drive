#include "communication.h"

String comm::readline (){
  /* while (!SERIAL); */
  return Serial.readStringUntil('\n');
}
MotorMessage comm::readMessage(){
  String msg = readline();
  int st_pos = 0;
  //read movement mode
  int end_pos = msg.indexOf(';');
  const String motor_mode_str = msg.substring(st_pos, end_pos);
  const MotorMode mode = MotorMode(motor_mode_str.toInt());

  /* // remove ';' from msg */
  /* msg.setCharAt(end_pos,' '); */
  /*  */
  /* //read movement type */
  /* st_pos = end_pos+1; */
  /* end_pos = msg.indexOf(';'); */
  /* const String movement_type_str = msg.substring(st_pos, end_pos); */
  /* const MovementType movement = movement_type_str.toInt(); */

  // remove ';' from msg
  msg.setCharAt(end_pos,' ');

  //read movement unit
  st_pos = end_pos+1;
  end_pos = msg.indexOf(';');
  const String movement_unit_str = msg.substring(st_pos, end_pos);
  const MovementUnit mov_unit= MovementUnit(movement_unit_str.toInt());

  // remove ';' from msg
  msg.setCharAt(end_pos,' ');

  //read movement speed
  st_pos = end_pos+1;
  end_pos = msg.indexOf(';');
  const String speed_str = msg.substring(st_pos, end_pos);
  const double speed = speed_str.toDouble();

  // remove ';' from msg
  msg.setCharAt(end_pos,' ');

  //read movement speed
  st_pos = end_pos+1;
  end_pos = msg.indexOf(';');
  const String position_str = msg.substring(st_pos, end_pos);
  const double pos = position_str.toDouble();


  return {mode, mov_unit, speed, pos};
}

void comm::writeMessage(const MotorResponse& mr){
  Serial.print(mr.success);
  Serial.print(';');

  Serial.print(mr.current_step_pos);
  Serial.print(';');

  Serial.print(mr.current_mm_pos);
  Serial.print(';');

  Serial.print(mr.current_rev_pos);
  Serial.print(';');
  
  Serial.print('\n');
}
