#include "header.h"
void first_line_print_command(void)
{
	command(0x38);
	command(0x0e);
	command(0x01);
	command(0x0f);
	command(0x80);
}

