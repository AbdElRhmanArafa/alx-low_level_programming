#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change
 * for an amount of money
 * coins 1 2 5 10 25
 *@argc: number of argument
 *@argv: array of argument
 *Return: returns 1 if there is an error; else returns 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int coins[] = {25,
				   10,
				   5,
				   2,
				   1};
	int cents, count = 0, i;

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
			{
				cents -= coins[i];
				count++;
				break;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
