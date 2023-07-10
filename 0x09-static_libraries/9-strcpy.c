#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strcpy - copies a string from one location to another
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
