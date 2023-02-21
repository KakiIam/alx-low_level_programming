#include <stdio.h>

/**
  * main - this prints the alphabet using putchar function.
  * Return: - this return a 0.
  */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
{
	putchar(alp[k]);
	putchar('\n');
}
	return (0);
}
