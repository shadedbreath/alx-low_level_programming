#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print the alphabet in small letters'
 * Return: 0 if successful
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
		return (0);
}
