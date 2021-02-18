#include "holberton.h"

/**
 * leet - encode string into 1337
 *
 * @str: string to encode
 *
 * Return: str
 */

char *leet(char *str)
{
int i = 0, j;
char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
leet[] = {'4', '3', '0', '7', '1'};
while (str[i] != '\0')
{
j = 0;
while (j < 5)
{						{
if (str[i] == a[j] || str[i] == b[j])
str[i] = leet[j];
j++;
}
i++;
}
return (str);
}
