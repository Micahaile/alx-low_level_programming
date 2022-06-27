#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of argument supplied to program
 * @argv: an array pointer to argument
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
