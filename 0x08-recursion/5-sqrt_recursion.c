#include "main.h"
#include <math.h>
int _sqrt(int, int);
/**
* _sqrt_recursion -> sqrt using recursion
* @n: parameter to be sqrt
* Return: square root of a number
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
	/**
	 * _sqrt -> recursion square root
	 * @n: number
	 * @i: iterator
	 * Return: a number
	 */

	int _sqrt(int i, int j)
	{
	int square = i * i;

	if (square > n)
	return (-1);
	if (square == n)
	return (i);
	return (sqrt(n, i + 1));
}
