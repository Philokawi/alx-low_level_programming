#include "main.h"
/**
 * main - check code
 * description:prints_alphabet_x10 -> print the lowercase
 * Return: 0
 */
int main(void)

{
	print_alphabet_x10();

	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
