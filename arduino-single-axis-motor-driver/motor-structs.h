#ifndef Motro_structs_h 
#define Motro_structs_h 
#include "Arduino.h"


enum MotorMode{
  CONFIG_MODE =0,
  HOME_MODE = 1,
  STEP_MODE = 2,
  CONTINOUS_MODE = 3,
  END_MODE = 4
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
  //TODO: separeta safe stop pins
  double steps_per_mm;
  double steps_per_degree;
};

struct MotorResponse{
  boolean success;
  unsigned long current_step_pos ;
  double current_mm_pos ;
};

#endif // !Motro_structs_h 
