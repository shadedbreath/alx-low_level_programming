#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Lowercase alphabets in reverse'
 * Return: 0 if successful
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
