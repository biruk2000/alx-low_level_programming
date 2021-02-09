#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
int i;
long double num1 = 1, num2 = 2, sum;
for (i = 0; i < 97; i++)
{
sum = num1 + num2;
num1 = num2;
num2 = sum;
printf("%.0Lf", sum);
if (i != 96)
printf(", ");
}
printf("\n");
return (0);
}
