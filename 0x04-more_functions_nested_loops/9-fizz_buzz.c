#include <stdio.h>
/**
  * main - entery point
  *
  * Return: always 0 success
  */
int main(void)
{
	int c;

	c = 1;
	while (c <= 100)
	{
		while (c % 3 == 0 || c % 5 == 0)
		{
			if (c % 3 == 0)
			{
				printf("Fizz");
			}
			if (c % 5 == 0)
			{
				printf("Buzz");
			}
			printf(" ");
			c++;
		}
		if (c <= 100)
		{
			printf("%d", c);
			printf(" ");
		}
/**
 *if (c < 10)
 *{
 *	_putchar((c % 10) + '0');
 *}
 *if (c < 100)
 *{
 *	_putchar((c / 10) + '0');
 *} else
 *{
 *	_putchar((c /100) + '0');
 *}
 */
		c++;
	}
	printf("\n");
	return (0);
}
