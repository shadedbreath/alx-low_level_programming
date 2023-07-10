#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - initializes a block of memory
 * @b: the value to be set in each byte
 * @n: Number of bytes to be set
 * @s: pointer to the starting address
 *
 * Return: the memset (s, b, n)
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
