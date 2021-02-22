#include "holberton.h"

/**
 * _memcpy - Copies n bytes from src to dest
 *
 * @dest: bytes copied to
 * @src: bytes copied from
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
