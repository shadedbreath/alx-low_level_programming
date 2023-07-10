#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - used to search a string for the first occurrence of any
 * character from a specified set of characters.
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: always successful
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
