#include "main.h"
#include <stdio.h>

/**
 * reset_to_98
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    void reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

