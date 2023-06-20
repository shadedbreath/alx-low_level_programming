#include "main.h"
/**
 * _islower - determine whether a character is a lowercase
 * In other cases shows 0
 *
 * @c: an ASCII character code
 *
 * Return: 1 for lowercase character 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}
