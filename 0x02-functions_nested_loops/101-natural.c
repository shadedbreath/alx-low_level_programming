#include <stdio.h>
/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if successful
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
