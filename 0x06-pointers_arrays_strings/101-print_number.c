#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 * print_number - print an integer
 * @n: The integer to be printed
 */

void print_number(int n)

{
	unsigned int n1;
	unsigned int num = n;

	n1 = n;
	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	putchar('-');
	num = -num;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	 _putchar((n1 % 10) + '0');

	if (num / 10 > 0)
	print_number(num / 10);
	putchar((num % 10) + '0');
}
