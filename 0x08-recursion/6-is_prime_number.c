#inlcude "main.h"
/**
 * check_prime - To check if a number is prime
 * @i: factor check
 * @p: prime num
 * Return: 1 if prime else 0
 */
int check_prime(int i, int p)
{
	if (p < 2 || p % i == 0)
		return (0);
	else if (i > p / 2)
		return (1);
	else
		return (check_prime(i + 1, p));
}
/**
 * is_prime_number - Check the truthy of a prime number
 * @n: Prime number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
