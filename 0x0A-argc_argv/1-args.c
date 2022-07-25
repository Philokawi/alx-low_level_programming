#include <stdio.h>

/**
 * main ->this is function to print number passed
 *@argc: An argument counter
 *@argv:An argument values
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
if (argv[0])

printf("%d\n", argc - 1);
return (0);
}
