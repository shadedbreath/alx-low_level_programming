#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memcpy - used to copy a block of memory from one location to another
 * @dest: pointer to the destination memory location
 * @src: pointer to the source memory location
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
