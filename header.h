#include<lpc21xx.h>
#define EN 1<<13
#define RS 1<< 10
#define RW 1<< 12
#define DATA 0xff<<15
#define port (EN|RS|RW|DATA)

void first_line_print_command(void);
void display_string(char *);
void buzzer_event(void);
void delay(void);
void data(char);
void command(int );
void lcd_string_display(char *,int);
void second_line_print_command(void);
