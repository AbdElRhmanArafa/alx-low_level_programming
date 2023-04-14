#include <stdio.h>
/**
 * main - prints multiplies two numbers
 *@argc: number of argument
 *@argv: array of argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul);
	return (0);
}
