#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr -  searches for the first occurrence of a character in a string
 * @s: pointer to the null-terminated string
 * @c: character to search for in the string
 *
 * Return: a null pointer if c is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
