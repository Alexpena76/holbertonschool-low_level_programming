#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: Pointer to 2D array representing the 8x8 chessboard
 *
 * Return: Nothing (void)
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	for (row = 0; row <= 7; row++)
	{
		for (col = 0; col <= 7; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
