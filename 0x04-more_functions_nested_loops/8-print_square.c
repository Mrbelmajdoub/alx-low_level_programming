#include "main.h"
/**
  * print_square - print a square
  * @size: the size of the square
  */
void print_square(int size)
{
	int f, l;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (f = 0; f < size; f++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
