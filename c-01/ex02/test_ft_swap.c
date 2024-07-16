#include <stdio.h>
#include "ft_swap.c"

int	main()
{
	int	a;
	int	b;

	a = 42;
	b = 100;
	printf("O valor de a é: %d\n", a);
	printf("O valor de b é: %d\n", b);
	ft_swap(&a, &b);
	printf("A função ft_swap(a, b), foi chamada e agora...\n");
	printf("O valor de a é: %d\n", a);
	printf("O valor de b é: %d\n", b);

}