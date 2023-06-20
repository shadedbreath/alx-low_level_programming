#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
