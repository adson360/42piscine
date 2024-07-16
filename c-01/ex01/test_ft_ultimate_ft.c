#include "ft_ultimate_ft.c"
#include <stdio.h>

int	main()
{
	int a = 100;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	int**** e = &d;
	int***** f = &e;
	int****** g = &f;
	int******* h = &g;
	int******** i = &h;
	int********* j = &i;

	printf("%d\n", a);
	ft_ultimate_ft(j);
	printf("%d\n", a);
}