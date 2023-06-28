#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
