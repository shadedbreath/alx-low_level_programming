#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
