#include <stdio.h>

/**
 * print_chessboard - Prints the contents of an 8x8 chessboard.
 * @a: The 8x8 array representing the chessboard.
 *
 * Description:
 * The function iterates through the 8 rows and 8 columns of the
 * 2D array and prints each character, followed by a newline at
 * the end of each row.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
