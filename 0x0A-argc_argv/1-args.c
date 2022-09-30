#include <stdio.h>
#include <stdlib.h>

/**
 *main -  a program that prints
 *the number of arguments passed into it.
 *
 *@argc: argument counter
 *
 *@argv: the argument sting
 *
 *Return: 0
 *
 */

int main(int argc, char *argv[]__attribute__((__unused__)))
{

	printf("%d\n", argc - 1);

	return (0);
}
