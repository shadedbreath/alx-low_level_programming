#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - used to determine the length of a substring
 * @s: pointer to the string to be examined
 * @accept:  pointer to the string containing the characters to be searched for
 *
 * Return: always successful
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
