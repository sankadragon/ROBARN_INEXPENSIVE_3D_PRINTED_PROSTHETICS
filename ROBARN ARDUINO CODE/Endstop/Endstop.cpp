#include "Arduino.h"
#include "Endstop.h"

Endstop::Endstop(int Endstop_pin)
{
Endstop_pin = _Endstop_pin;
}
void Endstop::begin()
{
  pinMode(_Endstop_pin, OUTPUT);
}

bool Endstop::status()
{
  return _status;
}

