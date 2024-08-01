#include "ft_iterative_power.c"
#include <stdio.h>

int	main()
{
	printf("%d\t", ft_iterative_power(-2, 3));
	printf("%d\t", ft_iterative_power(2, 2));
	printf("%d\t", ft_iterative_power(4, 2));
	printf("%d", ft_iterative_power(0, 0));

	printf("\n");

	printf("%d\t", -8);
	printf("%d\t", 4);
	printf("%d\t", 16);
	printf("%d", 1);
}