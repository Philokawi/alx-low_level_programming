#include <string.h>
#include "main.h"
/**
 * _strcat -> this is Function strcat
 * @dest:  char string to concatenate to
 * @src: second param
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src);

{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)

		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
		dest[i] = '\0';
		Return(dest);
}
