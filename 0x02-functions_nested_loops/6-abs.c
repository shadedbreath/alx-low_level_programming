#include "main.h"
/**
 * _abs - calculates the absolute value of a variable
 *
 * @i: inputs number as an integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}

	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
