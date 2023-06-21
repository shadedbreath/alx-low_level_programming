#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned int n = 0;
	unsigned int current = 1;
	unsigned int previous = 1;
	unsigned int temp;

	printf("%u, %u", previous, current);

	while (n < 96)
	{
		temp = current;
		current += previous;
		previous = temp;
		printf(", %u", current);
		n++;
	}
	printf("\n");
	return (0);
}
