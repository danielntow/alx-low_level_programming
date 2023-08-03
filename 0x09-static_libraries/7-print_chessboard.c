#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard (8x8).
 *
 * Description: This function prints the contents of the chessboard.
 * Each cell in the chessboard is represented by a character.
 * The chessboard is an 8x8 grid with alternating black and white squares.
 * The chessboard is used to visualize the chess positions and moves.
 *
 * Return: None (void)
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
		}
		putchar('\n');
	}
}
