#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - used to check if a given character is an uppercase letter
 * @c: character under check
 * Return: uppercase characters
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
