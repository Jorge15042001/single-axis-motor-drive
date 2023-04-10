#ifndef Motro_structs_h 
#define Motro_structs_h 


enum MotorMode{
  HOME_MODE = 1,
  RELATIVE = 2,
  ABSOLUTE = 3,
  };
enum MovementUnit{
  mm = 1,
  step = 2,
  rev = 3
  };
// enum MovementType{
//   relative= 1,
//   absolute = 2
// };

struct MotorMessage{
  MotorMode movement_mode;
  // MovementType movement_type;
  MovementUnit movement_unit;
  double speed;//mm/s or step/s depending on movement_unit
  double mag;
};
struct MotorSetupMessage{
  //TODO: separeta safe stop pins
  double steps_per_mm;
  double steps_per_degree;
};

struct MotorResponse{
  bool success;
  unsigned long current_step_pos ;
  double current_mm_pos ;
  double current_rev_pos ;
};

#endif // !Motro_structs_h 
