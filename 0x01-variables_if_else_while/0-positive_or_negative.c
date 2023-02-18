#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function outputs wheather n is positive or negative.
 * Return: - This retursn 0 when successful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	printf("%d is a positive number \n", n);
	else
	printf("%d is a negative number \n", n);
	return (0);
}
