#include "main.h"
/**
  * print_to_98 - prints all natural numbers from n to 98, then a new line
  * @n : the number to start from
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n = 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n > 98)
	{
		for (n = n; n = 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
