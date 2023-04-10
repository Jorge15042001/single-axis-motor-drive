#ifndef motor_h
#define motor_h

#include "motor-structs.h"
#include "Arduino.h"

struct Motor{
  //pins used for safe-stop sensors
  int safe_stop_pin_1 ;
  int safe_stop_pin_2 ;
  //pin used for step signal
  int step_pin;
  //pin used for direction control
  int dir_pin;
  // transformacion constant used for transforming mm to steps
  double steps_per_mm;
  // transformacion constant used for transforming steps to mm
  double mm_per_step;
  // transformacion constant used for transforming rev to steps
  double steps_per_rev;
  // transformacion constant used for transforming steps to rev
  double rev_per_step;
  // current position of the motor in steps, steps from home
  long pos_steps;

  Motor()=default;
  //parametrized constructor
  Motor(const int safe_stop_pin_1,const int safe_stop_pin_2, const int step_pin, const int dir_pin, const double steps_per_mm, const double steps_per_rev);
  // computes the number of steps from mm
  long computeSteps(const double mag, const MovementUnit u);
  // computes the number of mm from steps
  double computemm(const long steps) ;
  // computes the number of revolutions from steps
  double computeRev(const long steps) ;
  // go to a given posttion 
  MotorResponse goToPosition(const double pos,const double speed, const MovementUnit u);
  // move relative to the current position
  MotorResponse relativeMove(const double pos, const double speed, const MovementUnit u) ;
  // move a number steps, direction is controlled by the signed of n
  // the magnitude of m is the number of steps
  // steptime is the amount of us the step should take, used to control the rotational speed
  bool MoveSteps(const long n, const unsigned int step_time);
  // move the motor to home
  MotorResponse goHome();
  //
  bool mustStop (const int dir);

};
#endif // !motor_h
