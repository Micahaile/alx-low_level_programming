#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: the number of argument supplied to program
 * @argv: array of pointer to the program
 * Return: 0 sucess
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
