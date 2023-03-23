#include "main.h"
/**
  * more_numbers - print 10 times the numbers from 0 to 14 then a new line
  */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
	}
}
