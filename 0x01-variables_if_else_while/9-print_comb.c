#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Sequence with comma and space'
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
