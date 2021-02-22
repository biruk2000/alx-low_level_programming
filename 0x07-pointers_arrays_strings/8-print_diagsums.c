#include "holberton.h"

/**
 * print_diagsums - Prints diagonal sum
 *
 * @a: 2D array
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i]
sum2 += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
