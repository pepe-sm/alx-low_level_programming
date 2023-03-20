#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point, outputs primes
 * Return: 0.
 */

int main(void)
{
	int long prime = 612852475143, div;

	while (div <= prime / 2)
	{
	if ((prime % 2) == 0)
	{
	prime /= 2;
	continue;
	}

	for (div = 3; div <= (prime/2); div += 2)
	{
	if ((prime % div) == 0)
	prime /= div;
	}
	printf ("%ld", prime);
	div++;
	}
	return (0);
}
