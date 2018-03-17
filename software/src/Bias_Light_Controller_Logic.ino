#include "avr/interrupt.h"

int sensePin = 2;       //pin to sense system turn on
int controlPin = 0;    //output pin for the mosfet
volatile int reqLightLevel = 0;
int currLightLevel = 0;
volatile int powerState = LOW;
int maxLightLevel = 255;
volatile int change = LOW;

void setup() {
        // put your setup code here, to run once:
        pinMode(sensePin, INPUT);
        powerState = digitalRead(sensePin);
        analogWrite(controlPin, currLightLevel);
        attachInterrupt(0, switch_on, CHANGE);

}

void loop() {
        if(reqLightLevel > currLightLevel) {
                delay(4000);
                for(int f = 0; f < maxLightLevel; f += 1) {
                        analogWrite(controlPin, f);
                        delay(10);
                }
        }else if(reqLightLevel < currLightLevel) {
                for(int f = maxLightLevel; f >= 0; f -= 1) {
                        analogWrite(controlPin, f);
                        delay(5);
                }
        }
        change = LOW;
        currLightLevel = reqLightLevel;
        delay(10);
}

void switch_on(){
        powerState = digitalRead(sensePin);
        if(powerState == LOW) {
                reqLightLevel = 0;
        }else{
                reqLightLevel = maxLightLevel;
        }
        change = HIGH;
}
