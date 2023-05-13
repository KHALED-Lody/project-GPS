#ifndef SEVSEG
#define SEVSEG

#include "Bit_Utilities.h"
#include <TM4C123.h>
#include "tm4c123gh6pm.h"
#include <stdint.h>

void split_segments(double distance);
void show(int gnd, int value);

#endif