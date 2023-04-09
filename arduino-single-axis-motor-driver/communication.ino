#include "communication.h"
String comm::readline (){
  while (!SERIAL);
  return Serial.readStringUntil('\n');
}
void comm::writeMessage(){
  }
