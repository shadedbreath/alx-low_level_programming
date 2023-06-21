#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long long current = 1;
	unsigned long long previous = 0;
	unsigned long long next;

	for (int i = 0; i < 98; i++)
	{
		printf("%llu", current);

		if (i != 97)
			printf(", ");
		next = previous + current;
		previous = current;
		current = next;
	}
	printf("\n");
	return (0);
}
