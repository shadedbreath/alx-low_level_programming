#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - checks whether a given character is a lowercase letter
 * @c: character to be tested
 *
 * Return: 1 if successful 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
