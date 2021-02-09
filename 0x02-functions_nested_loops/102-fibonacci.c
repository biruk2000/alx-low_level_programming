#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
int i;
int num1 = 0, num2 = 2, sum;
for (i = 0; i < 50; i++)
{
sum = num1 + num2;
num1 = num2;
num2 = sum;
printf("%ld", sum);
if (i != 49)
printf(", ");
}
printf("\n");
return (0);
}
