#include "main.h"
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @guess: iterator test number
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int guess)
{
	if (n  == guess * guess)
		return (guess);
	if (guess == (n - 1))
		return (-1);
	int newGuess =  (guess + n / guess) / 2;

	return (actual_sqrt_recursion(n, newGuess));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	actual_sqrt_recursion(n, 1);
}
