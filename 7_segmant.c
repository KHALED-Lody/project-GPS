#include "7_segment.h"

extern unsigned char seg1, seg2, seg3;


void split_segments(double distance){

	int x =(int)distance;
	seg1 = (x%10);
	x/=10;
	seg2 = (x%10);
	x/=10;
	seg3 = (x%10);
}
void show(int gnd, int value){
}
