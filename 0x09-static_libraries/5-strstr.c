#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr -  search for the first occurrence of a substring within a string
 * @haystack: pointer to the string in which to search for the substring
 * @needle: pointer to the string with the substring to be searched for
 *
 * Return: successful always
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
