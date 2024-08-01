#include "ft_iterative_factorial.c"
#include <stdio.h>

int	main()
{
	printf("%d\t\t", ft_iterative_factorial(10));
	printf("%d\t\t", ft_iterative_factorial(5));
	printf("%d\t\t", ft_iterative_factorial(-5));
	printf("%d\t\t", ft_iterative_factorial(1));
	printf("%d\t\t", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(12));

	printf("\n");

	printf("3628800\t\t");
	printf("120\t\t");
	printf("0\t\t");
	printf("1\t\t");
	printf("1\t\t");
	printf("479001600");
	
	// printf("%d\n", ft_iterative_factorial(13));
	// printf("z");
}