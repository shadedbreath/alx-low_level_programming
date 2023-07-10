#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isalpha -  check if a given character is an alphabetic letter
 * @c: character to be tested
 *
 * Return: always successful
 */

int _isalpha(int c)
{
	return (isalpha(c));
}
