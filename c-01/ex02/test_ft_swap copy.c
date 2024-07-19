#include <stdio.h>
#include "ft_swap.c"

int	main() //aqui endereços de memória são passados para a função (o exercício pede)
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
/*

int	main() //aqui ponteiros são passados para a função
{
	int	a;
	int	b;
	int	*pa = &a;
	int	*pb = &b;

	*pa = 42;
	*pb = 100;
	printf("O valor de a é: %d\n", *pa);
	printf("O valor de b é: %d\n", *pb);
	ft_swap(pa, pb);
	printf("A função ft_swap(a, b), foi chamada e agora...\n");
	printf("O valor de a é: %d\n", *pa);
	printf("O valor de b é: %d\n", *pb);

}

*/