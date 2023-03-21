#include "main.h"
/**
  * times_table - print 9 times table, starting with 0
  */
void times_tibles(void)
{
	int l, c;

	int r;

	for (l = 0; l < 10; l++)
	{
		_putchar('0');
		_putchar(',');
		for (c = 1; c < 10; c++)
		{
			r = c * l;
			if (r < 10)
			{
				_putchar(' ');
			}
			_putchar(' ');
			_putchar(r + '0');
			if (c < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
