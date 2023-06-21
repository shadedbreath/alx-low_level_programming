#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned int current = 2;
	unsigned int previous = 1;
	unsigned int next;

	printf("1, 2");

	while (current <= 4000000)
	{
		next = previous + current;
		if (next > 4000000)
			break;
		printf(", %u", next);
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
