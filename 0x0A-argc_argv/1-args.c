#include <stdio.h>

/**
 * main ->this is function to print umber passed
 *@argc: argc parameter
 *@argv: an array of commands listed
 *Return: 0 for success
 */

int main(int argc, char *argv[] _attribute_((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}
