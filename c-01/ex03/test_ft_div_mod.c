#include <stdio.h>
#include "ft_div_mod.c"

int	main(void)
{
	int a = 42;
	int b = 4;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("O valor da divisão de %d por %d é %d e o resto é %d", a, b, div, mod);
}