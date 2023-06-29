#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first comparison string
 * @s2: pointer to the second comparing string
 * Return: If str1 < str2, the negative difference of unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
