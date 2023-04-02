#ifndef Motro_structs_h 
#define Motro_structs_h 
#include "Arduino.h"


enum MotorMode{
  HOME_MODE = 0,
  STEP_MODE = 1,
  CONTINOUS_MODE = 2,
  END_MODE = 3
  };
enum MovementUnit{
  mm = 1,
  step = 2
  };

struct MotorMessage{
  MotorMode movement_mode;
  MovementUnit movement_unit;
  double speed;//mm/s or step/s depending on movement_unit
  double movement_mag_start;
  double movement_mag_end;
};
struct MotorSetupMessage{
  int safe_stop_pin;
  int step_pin;
  int dir_pin;
  double steps_per_mm;
};

struct MotorResponse{
  boolean success;
  unsigned long current_step_pos ;
  double current_mm_pos ;
};

#endif // !Motro_structs_h 
