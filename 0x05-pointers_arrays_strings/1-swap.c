#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two intergers
 *@a: interger to swap
 *@b: integer t swap
 */
void swap_int(int *a, int *b)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
