#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to ninety eight
 *
 * @n: starting point of a number
 *
 * Return: 0 if successful
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}

			else
			{
				printf("%d, ", n);
			}
		}
	}

	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
