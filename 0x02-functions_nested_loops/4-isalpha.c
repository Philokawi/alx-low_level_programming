#include "main.h"
/**
 * main - entry point
 * Description: _isalpha -chechs for alphabetical letters
 * @c: a character to be checked on
 * Return: return 0 or 1 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
