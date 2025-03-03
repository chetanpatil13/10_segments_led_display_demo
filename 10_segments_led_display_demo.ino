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
