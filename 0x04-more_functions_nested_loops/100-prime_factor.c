# include <stdio.h>
/**
 * main - print prime factore of 1231952
 * Return: 0 success
 */
int main(void)
{
	long pr;
	long fac;

	pr = 612852475143;
	while (fac < (pr / 2))
	{
		if ((pr % 2) == 0)
		{
			pr /= 2;
			continue;
		}
		for (fac = 3; fac < (pr / 2); fac += 2)
		{
			if ((pr % fac) == 0)
				pr /= fac;
		}
	}
	printf("%ld\n", pr);
	return (0);
}
