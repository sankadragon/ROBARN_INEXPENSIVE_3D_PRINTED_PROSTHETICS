#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int Motor_pin1, int Motor_pin2, int Motor_pin3)
{
_Motor_pin1=Motor_pin1;
_Motor_pin2=Motor_pin2;
_Motor_pin3=Motor_pin3;
pinMode(_Motor_pin1, OUTPUT);
pinMode(_Motor_pin2, OUTPUT);
pinMode(_Motor_pin3, OUTPUT);
}

void Motor::open()
{
  digitalWrite(_Motor_pin1, HIGH);
  digitalWrite(_Motor_pin2, LOW);
  digitalWrite(_Motor_pin3, HIGH);
}

void Motor::close()
{
  digitalWrite(_Motor_pin1, LOW);
  digitalWrite(_Motor_pin2, HIGH);
  digitalWrite(_Motor_pin3, HIGH);
}

void Motor::off()
{
  digitalWrite(_Motor_pin1, LOW);
  digitalWrite(_Motor_pin2, HIGH);
  digitalWrite(_Motor_pin3, HIGH);
}
