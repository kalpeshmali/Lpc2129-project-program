#include "header.h"
void command(int c)
{
	IOPIN0=c<<15;
	IOCLR0=RS;
	IOCLR0=RW;
	IOSET0=EN;
	delay();
	IOCLR0=EN;
	delay();
}

