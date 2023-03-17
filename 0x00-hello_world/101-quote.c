
#include <stdio.h>


/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
 {
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long unsigned int  c = 0;
	while (c < sizeof(x)){
	  putchar(x[c]);
	  c++;
	}
	return (1);
 }
