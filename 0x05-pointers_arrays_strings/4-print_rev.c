#include "main.h"
/**
  * print_rev - prints a string, in reverrse, followed by a new line
  * @s: the string
  */
void print_rev(char *s)
{
	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}