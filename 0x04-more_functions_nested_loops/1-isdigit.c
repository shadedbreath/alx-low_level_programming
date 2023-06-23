#include "main.h"
/**
 * _isdigit - used to check for a digit
 * @c: the variable to be checked
 * Return: 1 if variable is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
