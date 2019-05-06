#include "header.h"
void second_line_print_command(void)
{
	command(0x38);
	command(0x0e);
	//command(0x01);
	command(0x0f);
	command(0x80);
	command(0xc0);
}
