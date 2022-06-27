#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: number of argument passed to the program
 * @argc: array of pointer to the program
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
