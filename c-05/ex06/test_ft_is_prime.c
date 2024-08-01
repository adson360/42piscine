#include "ft_is_prime.c"
#include <stdio.h>

int	main()
{
	int	a = 5;
	int	b = 10;
	int	c = 13;
	int	d = 17;
	int	e = -5;
	printf("%d\t%d\n", a,  ft_is_prime(a));
	printf("%d\t%d\n", b,  ft_is_prime(b));
	printf("%d\t%d\n", c,  ft_is_prime(c));
	printf("%d\t%d\n", d,  ft_is_prime(d));
	printf("%d\t%d\n", e,  ft_is_prime(e));
}