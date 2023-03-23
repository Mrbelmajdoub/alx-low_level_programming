#include "main.h"
/**
  * print_line - draws a straight line in the terminal
  * @n: lenght of the line, number of _ printed
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
