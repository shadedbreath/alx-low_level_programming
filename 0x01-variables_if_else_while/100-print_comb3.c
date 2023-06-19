#include <stdio.h>
/**
 * main - Entry point
 * Description: Double digit sequence that doesnt repeat the same number
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	int y;


	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x < y)
			{
				int number = x * 10 + y;

				putchar(x + '0');
				putchar(y + '0');

				if (number < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
