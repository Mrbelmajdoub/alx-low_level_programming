#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal end with \n
  * @n: number of times \ character should be used
  */
void print_diagonal(int n)
{
	int m, s;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (m = 0;  m <= n; m++)
		{
			s = m;
			while (s > 0)
			{
				_putchar(' ');
				s--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
