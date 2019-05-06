#include "header.h"
void data(char c)
{
	IOPIN0=c<<15;
	IOSET0=RS;
	IOCLR0=RW;
	IOSET0=EN;
	delay();
	IOCLR0=EN;
}

