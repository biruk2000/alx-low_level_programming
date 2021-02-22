#include "holberton.h"

/**
 * _strpbrk - search for any seto of bytes
 *
 * @s: string to search
 * @accept: bytes to be searched
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; *s++; i++)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
return (s);
}
}
}
return (0);
}
