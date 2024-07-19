#include "ft_sort_int_tab.c"
#include <stdio.h>

int	main()
{
	int tab[]= {1, 3, 10, 9, 1, 7, 3, 6, 5, 8, 4};
    int size = 11;
	int np = 0;
    

	printf("Antes:\n");
	while(np < size)
	{
		printf("%d\t", tab[np]);
		np++;
	}

	np=0;
	ft_sort_int_tab(tab, size);

	printf("\nDepois:\n");
	while(np < size)
	{
		printf("%d\t", tab[np]);
		np++;
	}

    return 0;
}