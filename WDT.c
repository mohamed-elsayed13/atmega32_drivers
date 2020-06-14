/*
 * WDT.c
 *
 * Created: 30/05/2020 2:43:00 AM
 *  Author: Mohamed Elsayed
 */ 
#include "WDT.h"
void WDT_ON(){
	WDTCR = 0b1111; // 2.1 second timeout
}
void WDT_OFF(){
	WDTCR = (1<<WDTOE)|(1<<WDE);
	WDTCR=0;
}