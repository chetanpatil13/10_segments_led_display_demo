// Project : Demo for 10 Segments LED Display
// Date : 04 March 2025
// Author : Chetan Patil

/*
* MIT License
*
* Copyright (c) 2025 Chetan Patil
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

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
