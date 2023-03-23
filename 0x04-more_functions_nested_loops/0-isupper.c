#include "main.h"
/**
  * _isupper - checks for uppercase character
  * @c: the character to be cheked
  * Return: always 1 for uppercase, 0 for lowercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
