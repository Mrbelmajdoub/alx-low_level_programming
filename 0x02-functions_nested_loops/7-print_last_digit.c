#include "main.h"
/**
  * print_last_digit - prints the last digit of a nuber
  * @n: the number which last degit is to be printed
  * Return: Always the value of the last digit .
  */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	_putchar('0' + l);
	return (l);
}
