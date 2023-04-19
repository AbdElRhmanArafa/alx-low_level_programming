#include "3-calc.h"
/**
 * main - choose (op)
 * @argc: number of argc
 * @argv:  argument value
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int (*op_all)(int, int);
	int a, b;

	if (argc != 4)
		return (98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_all = get_op_func(argv[2]);
	if (op_all)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op_all(a, b));
	return (0);
}
