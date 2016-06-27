#ifndef Endstop_h
#define Endstop_h

#include "Arduino.h"

class Endstop
{
  public:
  Endstop(int Endstop_pin);
  void begin();
  bool status();

  private:
  int _Endstop_pin;
  bool _status;
};

#endif
