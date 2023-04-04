#include "main.h"

/**
 * print_chessboard - prints the chessboard normal print function for
 * two dimensions arrays
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
