#include <stdio.h>

/**
 * main-main block
 * Return: 0
 */
int main(void)
{
	char mychar;
	int myint;
	long mylong;
	long long mylonglong;
	float myfloat;

	printf("Size of a char: %lu bytes(s)\n", sizeof(mychar));
	printf("Size of an int: %lu bytes(s)\n", sizeof(myint));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(mylong));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(mylonglong));
	printf("Size of a floant: %lu bytes(s)\n", sizeof(myfloat));

	return (0);
}
