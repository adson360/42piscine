#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int	a = 42;
	int	b = 10;
	printf("O valor de a é %d e o valor de b é %d.\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("A função ft_ultimate_div_mod(*a, *b) foi chamada e agora...\n");
	printf("O valor de a é %d e o valor de b é %d.\n", a, b);
	printf("Que são os valores da divisão e módulo, respectivamente");
}