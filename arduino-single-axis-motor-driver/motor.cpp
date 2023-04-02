#include "motor.h"

// Motor::Motor()
//     : safe_stop_pin(0), step_pin(0), dir_pin(0), steps_per_mm(0),
//     pos_steps(0) {
// }
Motor::Motor(const int safe_stop_pin, const int step_pin, const int dir_pin,
             const double steps_per_mm)
    : safe_stop_pin(safe_stop_pin), step_pin(step_pin), dir_pin(dir_pin),
      steps_per_mm(steps_per_mm), mm_per_step(1 / steps_per_mm), pos_steps(0) {
  pinMode(dir_pin, OUTPUT);
  pinMode(step_pin, OUTPUT);
  pinMode(safe_stop_pin, INPUT);

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
  // n >= 0 ? (unsigned long)n : (unsigned long)(-1 * n);//

  const unsigned int sleep_us = step_time / 2;
  // set direction
  digitalWrite(dir_pin, dir);

  for (unsigned long i = 0; i < steps; i++) {
    // move one step
    delayMicroseconds(sleep_us);
    digitalWrite(step_pin, HIGH);
    delayMicroseconds(sleep_us);
    digitalWrite(step_pin, LOW);
    // set new position
    pos_steps += signed_step;

    const int must_stop = digitalRead(safe_stop_pin);
    if (must_stop)
      return false;
  }
  return true;
}
MotorResponse Motor::goHome() {
  // move until safe_stop_pin is activated
  static const long max_steps =
      -2147483648; // max negative value that can be stored in a long
  const unsigned int step_time = 20; // TODO: set at configuration time
  // move until the safestop is activated
  MoveSteps(max_steps, step_time);
  // go back a few steps
  MoveSteps(3, step_time);
  // set this position as 0
  pos_steps = 0;
  return {true, 0, 0};
}
