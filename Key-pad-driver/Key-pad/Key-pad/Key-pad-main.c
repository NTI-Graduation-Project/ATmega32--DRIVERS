/*
 * Key_pad.c
 *
 * Created: 15/02/2020 07:42:57 م
 *  Author: sheha
 */ 


#include <avr/io.h>
#define F_CPU 16000000UL
#include "keypad.h"
#include "LEDs.h"

int main(void)
{
	  vKeypadInit();
   unsigned char pressed ; 
    while(1)
    {
        if (ucKeypad_Scan() == 'S'){
		LED0_DATA == 0X03; }
	       //TODO:: Please write your application code 
    }
}