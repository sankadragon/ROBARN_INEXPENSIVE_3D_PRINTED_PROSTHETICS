#include <EMG.h>

#include <Endstop.h>

#include <Motor.h>


//EMG
EMG Sensor(A0);
int threshold = 1.5;

//Endstop
Endstop CloseEndstop(1);
Endstop OpenEndstop(2);
int delaytime=500;

//Motor
Motor Motor(4,5,6);
String direction;

void setup() {
  // put your setup code here, to run once:

//Serial
Serial.begin(9600);

// Values
direction="closing";
}

void loop() {
//EMG
int EMGstatus = Sensor.EMGstatus();

//endstop
int CloseEndstopStatus = CloseEndstop.status();
int OpenEndstopStatus = OpenEndstop.status();

//motor directions and EMG
if (EMGstatus==1 && direction=="closing")
{
  Motor.open();
  direction="opening";
}

if (EMGstatus==1 && direction=="opening")
{
  Motor.close();
  direction="closing";
}

if (EMGstatus=0);
{
Motor.off();
}



//Endstops
if (CloseEndstopStatus==1 && direction=="closing")
{
  Motor.off();
  delay(delaytime);
  direction="opening";
}
if (OpenEndstopStatus==1 && direction=="Open")
{
  Motor.off();
  delay(delaytime);
  direction="closing";
}

}
