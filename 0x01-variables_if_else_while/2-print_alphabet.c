#include <stdio.h>

/**
  * main - this prints the alphabet using putchar function.
  * Return: - this return a 0.
  */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRST    UVWXYZ";
	int k;

	for (k = 0; k < 52; k++)
{
	putchar(alp[k]);
	putchar('\n');
}
	return (0);
}
