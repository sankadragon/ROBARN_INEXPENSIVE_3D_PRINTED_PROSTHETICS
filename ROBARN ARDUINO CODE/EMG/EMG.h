#ifndef EMG_h
#define EMG_h

#include "Arduino.h"

class EMG
{
  public:
  EMG(int EMG_pin);
  int EMGread();
  float voltage;
  int threshold;
  bool EMGstatus();
  
  private:
  int _EMG_pin;
  int EMGvalue;
};




#endif
