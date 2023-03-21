#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  *followed by a new lline
  */
void print_alphabet_x10(void)
{
	int j = 0;

	for (j = 0; j <= 9; j++)
	{
		char a = 'a';

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
