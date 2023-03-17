#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		if (x == 'd')
		{
			x++;
		} else if (x == 'p')
		{
			x++;
		} else
		{

		}
	}
	putchar('\n');
	return (0);
}
