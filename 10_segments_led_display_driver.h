#include "Arduino.h"

#define NO_OF_SEGMENTS 10

class TenSegLedDisplayDriver{
private:
  unsigned int *segmentsPins;
public:
  // constructor
  TenSegLedDisplayDriver(unsigned int *pins);

  // methods
  void clearAllLeds(void);
  void turnOnAllLeds(void);
  void TenSegLedDisplayDriver::blinkAllLeds(unsigned int blinkCount=5, unsigned int delayInMS=250);
  void runLedsLeftToRight(unsigned int delayInMS=250);
  void runLedsRightToLeft(unsigned int delayInMS=250);
  void moveGroupedLeds(unsigned int ledsInGroup=2, unsigned int delayInMS=250);
  void runSteppingLeds(unsigned int ledsInGroup=2, unsigned int delayInMS=250);
  void runAlternateLeds(unsigned int delayInMS=250);  
};

inline TenSegLedDisplayDriver::TenSegLedDisplayDriver(unsigned int *pins)
: segmentsPins { pins }
{
  for (unsigned int i=0; i<NO_OF_SEGMENTS; i++){
    // set all pins to output
    pinMode(segmentsPins[i], OUTPUT);
  }
}
