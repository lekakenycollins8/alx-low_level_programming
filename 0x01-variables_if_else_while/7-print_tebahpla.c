#include <stdio.h>
/**
 * main - Entry point
 * Print the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int r = 122;

	while (r >= 97)
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
