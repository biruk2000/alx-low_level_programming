#include "holberton.h"

/**
 * _strchr - points to the first occurance of a character
 *
 * @s: string to check
 * @c: character to point
 *
 * Return: s pointed to c character
 */

char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}
