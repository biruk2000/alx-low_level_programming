#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
_putchar('0' + num);
_putchar('\n');
}
