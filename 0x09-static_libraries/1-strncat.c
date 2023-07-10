#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - concatenates  a specified number of characters
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: max number of characters to be appended
 *
 * Return: 0 if successful
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
