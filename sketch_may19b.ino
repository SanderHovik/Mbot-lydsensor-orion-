

#include <SoftwareSerial.h>
#include <Wire.h>
#include "MeOrion.h"
MeDCMotor motorl(M1);
uint8_t motorSpeed=200;
MeSoundSensor mySound(PORT_6);


void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("Value=");
  Serial.println(mySound.strength() );
  if (mySound.strength()>550){
    motorl.run(motorSpeed);
    delay(2000);
    motorl.run(0);

  }
}
