#include "Arduino.h"
#include "EMG.h"

EMG::EMG(int EMG_pin)
{
pinMode(EMG_pin, OUTPUT);
  _EMG_pin=EMG_pin;
}

int EMG::EMGread()
{
  EMGvalue = analogRead(_EMG_pin); 
  voltage = EMGvalue * (5.0 / 1023.0); 
}

bool EMG::EMGstatus()
{
  if (voltage>threshold){
    return 1;
  }
  else{
    return 0;
  }
}
