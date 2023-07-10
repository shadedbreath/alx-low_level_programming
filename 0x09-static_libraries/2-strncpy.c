#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - copies a specified number of characters
 * @dest: pointer to destination string
 * @src: pointer to the source string
 * @n:  maximum number of characters to be copied
 *
 * Return: the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
