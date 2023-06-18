#include <stdio.h>
/**
 * main - Entry
 * Description: 'Using putchar'
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
