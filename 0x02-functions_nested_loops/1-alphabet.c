include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
	return (0);
}
