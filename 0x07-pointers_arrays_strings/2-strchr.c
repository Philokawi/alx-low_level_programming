#include "main.h"
/**
 *  _strchr - a function that locates a character in a string
 * @s: an input string to search in
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	a++;
	for (b = 0; b < a; b++)
	{
	if (c == s[b])
	s += b;
	return (s);
	}
	return ('\0');
}
