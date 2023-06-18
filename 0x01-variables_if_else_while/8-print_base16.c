#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Alphabets and numberz'
 * Return: 0 if sucessful
 */
int main(void)
{
	int n;
	int x;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

