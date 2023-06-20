#include "main.h"
/**
 * print_sign - checks whether the parameter is positive negative or zero
 *
 * @n: the input number
 *
 * Return: 1 if greater than zero or 0 if zero otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
