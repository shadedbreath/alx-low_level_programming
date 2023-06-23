#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * Description: from 0 to 14
 * Return: the numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
