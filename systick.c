#include "7_segment.h"
int counter;
unsigned char seg1, seg2, seg3;
void SysTick_Init (void) {

NVIC_ST_CTRL_R= 0; // 1) disable SysTick during setup
NVIC_ST_RELOAD_R= 0x00FFFFFF; // 2) maximum reload value 
NVIC_ST_CURRENT_R= 0; // 3) any write to CURRENT clears it 
NVIC_ST_CTRL_R= 0x00000005; // 4) enable SysTick with core clock 
}


 void SysTick_Wait ( uint32_t delay) {
	 NVIC_ST_RELOAD_R= delay-1; // number of counts 
	 NVIC_ST_CURRENT_R = 0; // any value written to CURRENT clears 
	 while ((NVIC_ST_CTRL_R&0x00010000)==0) {
		 // wait for flag 
		 }

} 
	

void Systick_Handler() {
if (counter==0) { 
	show (8, seg3);
counter++;
 }
if (counter==1) {
show (4, seg2);
counter++;}
if (counter ==2) {
show (2, seg1);
counter=0;
}
}