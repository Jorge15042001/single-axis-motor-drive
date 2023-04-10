#ifndef communication_h
#define communication_h
#include "motor-structs.h"
#include "Arduino.h"

namespace  comm{

  String readline ();

  void writeMessage(const MotorResponse& mr);
  MotorMessage readMessage();


}
#endif // communication_h
