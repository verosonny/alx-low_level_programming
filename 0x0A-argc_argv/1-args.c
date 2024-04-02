#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passec to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
