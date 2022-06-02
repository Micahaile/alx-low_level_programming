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

	printf("Size of char: %lu bytes(s)\n", sizeof(mychar));
	printf("Size of int: %lu bytes(s)\n", sizeof(myint));
	printf("Size of long: %lu bytes(s)\n", sizeof(mylong));
	printf("Size of long long: %lu bytes(s)\n",sizeof(mylonglong));
	printf("Size of floant: %lu bytes(s)\n", sizeof(myfloat));

	return (0);
}
