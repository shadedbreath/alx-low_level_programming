#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input variable as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int z;

	z = n % 10;

	if (z < 0)
	{
		_putchar(-z + 48);
		return (-z);
	}
	else
	{
		_putchar(z + 48);
		return (z);
	}
	_putchar('\n');
}
