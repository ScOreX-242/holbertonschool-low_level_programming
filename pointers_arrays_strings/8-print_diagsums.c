#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the flattened square matrix (int *).
 * @size: The size of the matrix (e.g., for a 3x3 matrix, size is 3).
 *
 * Description:
 * The function iterates through the matrix to calculate the sum of the
 * elements on the primary diagonal and the secondary diagonal, then prints
 * the sums separated by a comma and a space.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_primary = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		/* Calculate the index for the Primary Diagonal: i * size + i */
		sum_primary += a[(i * size) + i];

		sum_secondary += a[(i * size) + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
