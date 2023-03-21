#include"main.h"

/**
  * main - entery point on 1-main.c
  * print_alphabet - in lowercase followed by new line
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
