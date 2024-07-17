#include "ft_rev_int_tab.c"
#include <stdio.h>

int	main()
{
	int tab[5] = {20, 22, 44, 36, 42};
	ft_rev_int_tab(tab, 5);
	printf("Os elementos da array antes são: \n");
	printf("[%d, %d, %d, %d, %d] \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	printf("\n");
	printf("Os elementos da array depois são: \n");
	printf("[%d, %d, %d, %d, %d] \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}