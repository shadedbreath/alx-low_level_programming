#include <stdio.h>
/**
 * main - Entry point
 * Description: Hell if I know
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			int x_digit1 = x / 10;
			int x_digit2 = x % 10;
			int y_digit1 = y / 10;
			int y_digit2 = y % 10;

			if (x == y)
				continue;

			if (x > y)
				continue;

			putchar(x_digit1 + '0');
			putchar(x_digit2 + '0');
			putchar(' ');
			putchar(y_digit1 + '0');
			putchar(y_digit2 + '0');

			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
