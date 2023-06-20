#include "main.h"
/**
 * _isalpha - shows if a character is an alphabetic letter
 *
 * @c: an ASCII character
 *
 * Return: 1 if an alphabetic letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}
