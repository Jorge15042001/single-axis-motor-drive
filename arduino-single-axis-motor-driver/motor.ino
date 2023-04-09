#include "motor.h"

/*  Motor::Motor() */
/*      : safe_stop_pin(0), step_pin(0), dir_pin(0), steps_per_mm(0), */
/* //     pos_steps(0) { */
/*  } */
Motor::Motor(const int safe_stop_pin, const int step_pin, const int dir_pin,
             const double steps_per_mm, const double steps_per_rev)
    : safe_stop_pin(safe_stop_pin), step_pin(step_pin), dir_pin(dir_pin),
      steps_per_mm(steps_per_mm), mm_per_step(1 / steps_per_mm),
      steps_per_rev(steps_per_rev), rev_per_step(1/steps_per_rev), pos_steps(0) {
  pinMode(dir_pin, OUTPUT);
  pinMode(step_pin, OUTPUT);

  pinMode(safe_stop_pin, INPUT);

  
  digitalWrite(dir_pin,LOW);
  digitalWrite(step_pin,LOW);

  goHome();
}

long Motor::computeSteps(const double mm) { return steps_per_mm * mm; }

double Motor::computemm(const long steps) { return mm_per_step * steps; }

MotorResponse Motor::goToPosition(const double pos, const double speed,
                                  const MovementUnit u) {
  const long steps = u == MovementUnit::step ? pos : computeSteps(u);
  const unsigned int step_time = u == MovementUnit::step
                                     ? (1 / speed) * 1e6
                                     : (1. / computeSteps(speed)) * 1e6;
  const boolean succ = MoveSteps(steps, step_time);
  return {succ, pos_steps, computemm(pos_steps)};
}
// the sign of n sets the direction
bool Motor::MoveSteps(const long n, const unsigned int step_time) {
  // set direction positive steps as HIGH, negative steps as LOW
  const int dir = n >= 0 ? HIGH : LOW;
  const int signed_step =
      n >= 0 ? 1 : -1; // if moving in the positive direction =1 else =-1
  const unsigned long steps = abs(n);

  const unsigned int sleep_us = step_time / 2;
  // set direction
  digitalWrite(dir_pin, dir);

  for (unsigned long i = 0; i < steps; i++) {
    // move one step
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(sleep_us);
    digitalWrite(step_pin, LOW);
    delayMicroseconds(sleep_us);
    // set new position
    pos_steps += signed_step;

    const boolean must_stop = digitalRead(safe_stop_pin)==HIGH;
    if (must_stop)
      return false;
  }
  return true;
}
MotorResponse Motor::goHome() {
  // move until safe_stop_pin is activated
  static const long max_steps =
      -2147483648; // max negative value that can be stored in a long
  static const unsigned int step_time_homing_1 = 100; // TODO: set at configuration time
  static const unsigned int step_time_homing_2 = 1000; // TODO: set at configuration time
  static const unsigned long homing_clearance = 5;
  static const int sleep_time_homing = 500;
  // move until the safestop is activated
  MoveSteps(max_steps, step_time_homing_1);
  // go back a few steps
  delay(500);
  Serial.println("going back");
  boolean cleared_homing_1 = false;
  while (!cleared_homing_1){
    cleared_homing_1 = MoveSteps(1, step_time_homing_2);
    }
  MoveSteps(homing_clearance*10, step_time_homing_2);

  // second homing for better resolution
  delay(500);
  Serial.println("homing 2");
  MoveSteps(max_steps, step_time_homing_2);
  delay(500);
  bool cleared_homing_2 = false;
  while (!cleared_homing_2){
    cleared_homing_2 = MoveSteps(1, step_time_homing_2);
    }
  MoveSteps(homing_clearance, step_time_homing_2);
  // go back a few steps

  // set this position as 0
  pos_steps = 0;
  return {true, 0, 0};
}
