#include "header.h"
void lcd_string_display(char *str,int num)
{	
	IODIR0=port;
	if(num==1)
	{
		first_line_print_command();
	
	}
	else
	{
		second_line_print_command();

	}
	
		display_string(str);
		buzzer_event();
		//IODIR0=port;
	//command(0xc0);
	//buzzer_event();
}

