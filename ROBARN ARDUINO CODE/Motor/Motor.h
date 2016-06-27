#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
  Motor(int Motor_pin1, int Motor_pin2, int Motor_pin3);
  void open();
  void close();
  void off();
  String direction;

  private:
  int _Motor_pin1;
  int _Motor_pin2;
  int _Motor_pin3; 
};


#endif
