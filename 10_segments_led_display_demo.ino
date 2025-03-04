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

unsigned int segmentsGpios[NO_OF_SEGMENTS] = {0,1,2,3,4,5,6,7,8,9};
TenSegLedDisplayDriver tenSegObj(segmentsGpios);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  tenSegObj.clearAllLeds();
  tenSegObj.runLedsLeftToRight(100);

  tenSegObj.clearAllLeds();
  tenSegObj.runLedsRightToLeft();

  tenSegObj.clearAllLeds();
  tenSegObj.runAlternateLeds();
  
  tenSegObj.clearAllLeds();
  tenSegObj.blinkAllLeds(3);

  tenSegObj.clearAllLeds();
  tenSegObj.moveGroupedLeds(1);

  tenSegObj.clearAllLeds();
  tenSegObj.moveGroupedLeds(2);

  tenSegObj.clearAllLeds();
  tenSegObj.moveGroupedLeds(3);

  tenSegObj.clearAllLeds();
  tenSegObj.moveGroupedLeds(4);

  tenSegObj.clearAllLeds();
  tenSegObj.moveGroupedLeds(5);

  tenSegObj.clearAllLeds();
  tenSegObj.runSteppingLeds(1);

  tenSegObj.clearAllLeds();
  tenSegObj.runSteppingLeds(2);

  tenSegObj.clearAllLeds();
  tenSegObj.runSteppingLeds(3);

  tenSegObj.clearAllLeds();
  tenSegObj.runSteppingLeds(4, 350);
}
