#include <stdio.h>
/**
 * main - Entry point
 * Prints alphabet in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
