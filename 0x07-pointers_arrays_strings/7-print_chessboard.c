#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: unsused parameter (cast to void to avoid warnings)
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			if ((r + c) % 2 == 0)
			{
				_putchar(a[r][c]);
			}
			else
			{
				_putchar(a[r][c]);
			}
		}
		_putchar('\n');
	}
}
