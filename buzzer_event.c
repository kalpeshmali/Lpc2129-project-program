#include "header.h"
void buzzer_event(void)
{
	IODIR0=1<<11;
	IOSET0=1<<11;
	delay();
	IOCLR0=1<<11;
	delay();
}

