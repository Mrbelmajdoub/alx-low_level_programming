#include <stdio.h>
/**
  * main - Entry poit
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 'a';

	char X = 'A';

	for (x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
	putchar(X);
	}
	putchar('\n');
	return (0);
}
