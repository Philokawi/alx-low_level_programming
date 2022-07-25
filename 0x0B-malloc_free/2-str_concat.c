#include "main.h"
<<<<<<< HEAD
#include <stdlb.h>
/**
* str_concat - A function that concatenates two strings
* @s1: An input pointer of the first string
* @s2: An input pointer of the second string
* Return: Apointer to concatened strings or NULL if it str is NULL
*/

char *str_concat(char *s1, char *s2)
{
char *new_str, *starts1, *starts2;

int i = 0, lens1 = 0, lens2 = 0;

starts1 = s1;
starts2 = s2;
if (s1 == NULL)
s1 = "";
while (*s1)
{
lens1++;
s1++;
}
s1 = starts1;
if (s2 == NULL)
s2 = "";
while (*s2)
{
lens2++;
s2++;
}
s2 = starts2;
new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
starts1 = new_str;
if (new_str == NULL)
return (NULL);
for (; i < (lens1 + lens2); i++)
{
if (i < lens1)
{
new_str[i] = *s1;
s1++;
}
else
{
new_str[i] = *s2;
s2++;
}
}
new_str[i] = '\0';
return (starts1);
=======
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
>>>>>>> b52d8adeb14cea7d45fd78b2e7ea68515875a887
}
