#ifndef INDOSMARTEC_IO_H
#define INDOSMARTEC_IO_H

#include <Arduino.h>

// Deklarasi fungsi setupPin
void setupPin(byte numberPin, byte mode) {
    pinMode(numberPin, mode);
}

// Deklarasi fungsi outputSet
void outputSet(byte numberPin, byte statusPin) {
    digitalWrite(numberPin, statusPin);
}

// Deklarasi fungsi blink
void blink(byte numberPin, unsigned long delayTime) {
    digitalWrite(numberPin, HIGH);
    delay(delayTime);
    digitalWrite(numberPin, LOW);
    delay(delayTime);
}

#endif
