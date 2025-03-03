#include "10_segments_led_display_driver.h"

void TenSegLedDisplayDriver::clearAllLeds(void)
{
  for (unsigned int i=0; i<NO_OF_SEGMENTS; i++){
    digitalWrite(segmentsPins[i], 0);    
  }
}

void TenSegLedDisplayDriver::turnOnAllLeds(void)
{
  for (unsigned int i=0; i<NO_OF_SEGMENTS; i++){
    digitalWrite(segmentsPins[i], 1);    
  }
}

void TenSegLedDisplayDriver::blinkAllLeds(unsigned int blinkCount=5, unsigned int delayInMS=250)
{
  for(unsigned int i=0; i<blinkCount; i++){
    clearAllLeds();
    delay(delayInMS);
    turnOnAllLeds();
    delay(delayInMS);
  }
}
  
void TenSegLedDisplayDriver::runLedsLeftToRight(unsigned int delayInMS=250)
{
  for (unsigned int i=0; i<NO_OF_SEGMENTS; i++){
    digitalWrite(segmentsPins[i], 1);
    delay(delayInMS);
  }
}

void TenSegLedDisplayDriver::runLedsRightToLeft(unsigned int delayInMS=250)
{
  for (int i=(NO_OF_SEGMENTS-1); i>=0; i--){
    digitalWrite(segmentsPins[i], 1);
    delay(delayInMS);
  }
}

void TenSegLedDisplayDriver::moveGroupedLeds(unsigned int ledsInGroup=2, unsigned int delayInMS=250)
{
  for (unsigned int i=0; i<(NO_OF_SEGMENTS-1); i++){
    for(unsigned int j=i; (j<(ledsInGroup+i) && (j<NO_OF_SEGMENTS)); j++){
      digitalWrite(segmentsPins[j], 1);
    }
    delay(delayInMS);
    digitalWrite(segmentsPins[i], 0);

  }
}

void TenSegLedDisplayDriver::runSteppingLeds(unsigned int ledsInGroup=2, unsigned int delayInMS=250)
{
  for (unsigned int i=0; i<(NO_OF_SEGMENTS-1); i++){
    for(unsigned int j=i; (j<(ledsInGroup+i) && (j<NO_OF_SEGMENTS)); j++){
      digitalWrite(segmentsPins[j], 1);
    }
    delay(delayInMS);
    digitalWrite(segmentsPins[i], 0);
    delay(delayInMS);
  }
}

void TenSegLedDisplayDriver::runAlternateLeds(unsigned int delayInMS=250)
{
  for (unsigned int i=0; i<NO_OF_SEGMENTS; i+=2){
    digitalWrite(segmentsPins[i], 1);
    delay(delayInMS);
  }
}
