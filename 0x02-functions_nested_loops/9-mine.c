#include "main.h"
/**
  * times_table - print 9 times table, starting with 0
  *
  * Return: always 0.
  */
void times_table(void)
{
	int l;

	int c;

	int r;

	for (l = 0; l <= 9; l++)
	{
		_putchar('0');
		_putchar(',');
		for (c = 1; c <= 9; c++)
		{
			r = c * l;
			if (r < 10)
			{
				_putchar(' ');
			}
			_putchar(' ');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
