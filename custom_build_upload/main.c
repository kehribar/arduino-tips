/******************************************************************************
*
* Basic blinky example code for Arduino UNO which doesn't need Arduino IDE
*	ihsan Kehribar - 2012
******************************************************************************/
#include <avr/io.h>
#include <avr/delay.h>
#include "digital.h"

int main()
{
	pinMode(B,5,OUTPUT);

	while(1)
	{
		digitalWrite(B,5,HIGH);
		_delay_ms(500);
		digitalWrite(B,5,LOW);
		_delay_ms(500);

		/*togglePin(B,5);
		_delay_ms(500);*/
	}	

	return 0;
}
