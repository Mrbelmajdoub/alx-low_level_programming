#include "main.h"
/**
  * print_triangle - prints a triangle followed by line
  * @size: the size of the triangle
  */
void print_triangle(int size)
{
	int s, r, d;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (s = size; s > 0; s--)
		{
			r = s;
			while (r > 1)
			{
				_putchar(' ');
				r--;
			}
			d = size - s;
			while (d >= 0)
			{
				_putchar('#');
				d--;
			}
			_putchar('\n');
		}
	}
}
