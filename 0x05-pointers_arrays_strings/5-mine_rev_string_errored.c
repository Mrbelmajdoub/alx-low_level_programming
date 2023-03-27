#include "main.h"
/**
  * rev_string - reverses a string
  * @s: ponter parameter
  */
void rev_string(char *s)
{
	int i, j, n, last;

	char r = *s;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	last = i - 1;
	for (j = last; j >= 0; j--)
	{
		r[j] = s[n];
		n++;
	}
	s = &r;
}
