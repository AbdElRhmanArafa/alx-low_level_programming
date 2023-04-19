#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: ....
 * @argv: ....
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *ptrFun = (char *)main;
	int b;

	if (argc != 2)
		printf("Erro\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	while (b--)
		printf("%02hh%s", *ptrFun++, b ? " " : "\n");
	return (0);
}
