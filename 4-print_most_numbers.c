#include "main.h"
/**
  * print_most_numbers - print 0 to 9 followed by line, skip 2 and 4
  */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			c++;
		}
		_putchar(c);
	}
	_putchar('\n');
}
